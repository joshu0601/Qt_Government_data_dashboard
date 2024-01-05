#include "dashboard.h"
#include "ui_dashboard.h"
#include "datalist.h"
ProgressDialog::ProgressDialog(const QUrl &url, QWidget *parent)
    : QProgressDialog(parent)
{
    setWindowTitle(tr("Download Progress"));
    setLabelText(tr("Downloading %1.").arg(url.toDisplayString()));
    setMinimum(0);
    setValue(0);
    setMinimumDuration(0);
    setMinimumSize(QSize(400, 75));
}

void ProgressDialog::networkReplyProgress(qint64 bytesRead, qint64 totalBytes)
{
    setMaximum(totalBytes);
    setValue(bytesRead);
}
dashboard::dashboard(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::dashboard)
{
    //status setup
    ui->setupUi(this);
    ui->data_base_comboBox->clear();
    setWindowTitle(tr("政府公開資料儀表板"));

    for(int i=0;i<251;i++)
    {
        ui->data_base_comboBox->addItem(datalist[i]);
    }

    ui->element1_comboBox->setEnabled(false);
    ui->element2_comboBox->setEnabled(false);
    ui->element3_comboBox->setEnabled(false);
    ui->StartYearcomboBox->setEnabled(false);
    ui->EndYearcomboBox->setEnabled(false);
    ui->Line_chart->setEnabled(false);
    ui->Bar_chart->setEnabled(false);
    ui->Pie_Chart->setEnabled(false);
    ui->point_chart->setEnabled(false);
    ui->dowload->setEnabled(false);

    ChartView = new QChartView(this);
    ui->display->addWidget(ChartView);
}

dashboard::~dashboard()
{
    delete ui;
}
/////////////////download file//////////////////////
void dashboard::startRequest(const QUrl &requestedUrl)
{
    httpRequestAborted = false;

    //! [qnam-download]
    reply.reset(qnam.get(QNetworkRequest(requestedUrl)));
    //! [qnam-download]
    //! [connecting-reply-to-slots]
    connect(reply.get(), &QNetworkReply::finished, this, &dashboard::httpFinished);
    //! [networkreply-readyread-1]
    connect(reply.get(), &QIODevice::readyRead, this, &dashboard::httpReadyRead);
    //! [networkreply-readyread-1]

    ui->ListButton->setEnabled(false);
    ProgressDialog *progressDialog = new ProgressDialog(requestedUrl, this);
    progressDialog->setAttribute(Qt::WA_DeleteOnClose);
    connect(progressDialog, &QProgressDialog::canceled, this, &dashboard::cancelDownload);
    connect(reply.get(), &QNetworkReply::downloadProgress,
            progressDialog, &ProgressDialog::networkReplyProgress);
    connect(reply.get(), &QNetworkReply::finished, progressDialog, &ProgressDialog::hide);
    progressDialog->show();
}
void dashboard::cancelDownload()
{
    httpRequestAborted = true;
    reply->abort();
    ui->dowload->setEnabled(true);
    ui->ListButton->setEnabled(true);
}
std::unique_ptr<QFile> dashboard::openFileForWrite(const QString &fileName)
{
    std::unique_ptr<QFile> file = std::make_unique<QFile>(fileName);
    if (!file->open(QIODevice::WriteOnly)) {
        QMessageBox::information(this, tr("Error"),
                                tr("Unable to save the file %1: %2.")
                                .arg(QDir::toNativeSeparators(fileName),
                                file->errorString()));
        return nullptr;
    }
    return file;
}
void dashboard::httpFinished()
{
    QFileInfo fi;
    if (file) {
        fi.setFile(file->fileName());
        file->close();
        file.reset();
    }

    //! [networkreply-error-handling-1]
    QNetworkReply::NetworkError error = reply->error();
    const QString &errorString = reply->errorString();
    //! [networkreply-error-handling-1]
    reply.reset();
    //! [networkreply-error-handling-2]
    if (error != QNetworkReply::NoError) {
        QFile::remove(fi.absoluteFilePath());
        if (!httpRequestAborted) {
            ui->dowload->setEnabled(true);
        }
        return;
    }
    //! [networkreply-error-handling-2]
    ui->ListButton->setEnabled(true);
}
void dashboard::httpReadyRead()
{
    if (file)
        file->write(reply->readAll());
}
void dashboard::downloadFile(QString url,QString fn,bool en)
{
    const QUrl newUrl =QUrl::fromUserInput(url);
    qDebug()<<newUrl;
    QString filename=fn+".json";
    qDebug()<<filename;
    QString downloadDirectory = QDir::currentPath() +"/download";
    qDebug()<<downloadDirectory;
    bool useDirectory = !downloadDirectory.isEmpty() && QFileInfo(downloadDirectory).isDir();
    if (useDirectory)
        filename.prepend(downloadDirectory + '/');
    if (QFile::exists(filename))
        QFile::remove(filename);

    file = openFileForWrite(filename);
    if (!file)
        return;
    startRequest(newUrl);
    if(en)
    {
        analysis_fileName =fn+".json";
        analysis_filePath=filename;
        ui->InputNameLabel->setText("檔案名稱: "+analysis_fileName);
        ui->InputFileLabel->setText("檔案位置: "+analysis_filePath);
    }

}

////////////////////////////////////////////////////

void dashboard::on_dowload_clicked()
{

    int index =ui->data_base_comboBox->currentIndex();
    QStringList startyearlist=ui->StartYearcomboBox->currentText().split(" ");
    QString startyear=QString::number(startyearlist[0].toInt()+1911);

    QStringList endyearlist=ui->EndYearcomboBox->currentText().split(" ");
    QString endtyear=QString::number(endyearlist[0].toInt()+1911);

    QString fileloc=QDir::currentPath()+"/download/"+datalistnumber[index-1]+"_datalist.json";
    QJsonArray pointer=readjson(fileloc,0);
    QString v1,v2="",v3="";
    qDebug()<<pointer[1].toObject().value("values").toArray();
    if(pointer.size()==1)
    {
        v1=pointer[0].toObject().value("values").toArray()[ui->element1_comboBox->currentIndex()].toObject().value("id").toString();
    }
    else if(pointer.size()==2)
    {
        v1=pointer[0].toObject().value("values").toArray()[ui->element1_comboBox->currentIndex()].toObject().value("id").toString();
        v2=pointer[1].toObject().value("values").toArray()[ui->element2_comboBox->currentIndex()].toObject().value("id").toString();
    }
    else
    {
        v1=pointer[0].toObject().value("values").toArray()[ui->element1_comboBox->currentIndex()].toObject().value("id").toString();
        v2=pointer[1].toObject().value("values").toArray()[ui->element2_comboBox->currentIndex()].toObject().value("id").toString();
        v3=pointer[2].toObject().value("values").toArray()[ui->element3_comboBox->currentIndex()].toObject().value("id").toString();
    }
    QString downloadURL="https://nstatdb.dgbas.gov.tw/dgbasAll/webMain.aspx?sdmx/"+datalistnumber[index-1]+
                          "/"+v1+"."+v2+"."+v3+".A"+
                          "&startTime="+startyear+"-00 &endTime="+endtyear+"-00";

    qDebug()<<downloadURL;
    if(v2==".")v2="";
    if(v3==".")v3="";
    QString filename=datalistnumber[index-1]+"_"+v1+v2+v3+"_"+startyear+"_"+endtyear;
    //check exist
    QString path=QDir::currentPath()+"/download";
    QDirIterator it(path,QStringList()<<"*.json",QDir::Files);

    bool exist=0;
    while(it.hasNext())
    {
        QString str=it.next();
        QStringList strlist=str.split("/");
        str=strlist[strlist.length()-1];
        if(str==filename+".json")
        {
            exist=1;
            break;
        }
    }
    if(!exist)
    {
        downloadFile(downloadURL,filename,1);
    }
    else
    {
        analysis_fileName =filename+".json";
        analysis_filePath=path+"/"+filename+".json";
        ui->InputNameLabel->setText("檔案名稱: "+analysis_fileName);
        ui->InputFileLabel->setText("檔案位置: "+analysis_filePath);
    }
    ui->Line_chart->setEnabled(true);
    ui->Bar_chart->setEnabled(true);
    ui->Pie_Chart->setEnabled(true);
    ui->point_chart->setEnabled(true);
}


void dashboard::on_data_base_comboBox_currentIndexChanged(int index)
{
    //add find download file
    if(index!=0)
    {

        ui->element1_comboBox->setEnabled(false);
        ui->element2_comboBox->setEnabled(false);
        ui->element3_comboBox->setEnabled(false);
        ui->StartYearcomboBox->setEnabled(false);
        ui->dowload->setEnabled(false);
        ui->EndYearcomboBox->setEnabled(false);
        ui->StartYearcomboBox->clear();
        ui->EndYearcomboBox->clear();
        QString path=QDir::currentPath()+"/download";
        QDirIterator it(path,QStringList()<<"*.json",QDir::Files);
        bool exist=0;
        while(it.hasNext())
        {
            QString str=it.next();
            QStringList strlist=str.split("/");
            str=strlist[strlist.length()-1];
            if(str==datalistnumber[index-1]+"_datalist.json")
            {
                exist=1;
                break;
            }
        }
        if(!exist)
        {
            downloadFile("https://nstatdb.dgbas.gov.tw/dgbasAll/webMain.aspx?sdmx/"+datalistnumber[index-1]+"/all",datalistnumber[index-1]+"_datalist",0);
        }
    }
    else
    {
        ui->element1_comboBox->setEnabled(false);
        ui->element2_comboBox->setEnabled(false);
        ui->element3_comboBox->setEnabled(false);
        ui->StartYearcomboBox->setEnabled(false);
        ui->EndYearcomboBox->setEnabled(false);
        ui->dowload->setEnabled(false);
        ui->StartYearcomboBox->clear();
        ui->EndYearcomboBox->clear();
    }
    if(index!=2 && index!=5)
    {
        for(int i=40;i<=111;i++)
        {
            ui->StartYearcomboBox->addItem(QString::asprintf("%d 年",i));
            ui->EndYearcomboBox->addItem(QString::asprintf("%d 年",i));
        }
        ui->StartYearcomboBox->setCurrentIndex(111-40-3);
        ui->EndYearcomboBox->setCurrentIndex(111-40);
    }
    else if(index==2)
    {
        for(int i=40;i<=69;i++)
        {
            ui->StartYearcomboBox->addItem(QString::asprintf("%d 年",i));
            ui->EndYearcomboBox->addItem(QString::asprintf("%d 年",i));
        }
        ui->StartYearcomboBox->setCurrentIndex(69-40-3);
        ui->EndYearcomboBox->setCurrentIndex(69-40);
    }
    else if(index==5)
    {
        for(int i=70;i<=111;i++)
        {
            ui->StartYearcomboBox->addItem(QString::asprintf("%d 年",i));
            ui->EndYearcomboBox->addItem(QString::asprintf("%d 年",i));
        }
        ui->StartYearcomboBox->setCurrentIndex(111-70-3);
        ui->EndYearcomboBox->setCurrentIndex(111-70);
    }

}



QJsonArray dashboard::readjson(QString loc,bool gp=0)
{
    QJsonArray error;
    QFile file(loc);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "can't open error!";
        return error;
    }

    QTextStream stream(&file);
    QString str = stream.readAll();
    file.close();
    //qDebug()<<str;
    QJsonParseError jsonError;
    QJsonDocument doc = QJsonDocument::fromJson(str.toUtf8(), &jsonError);
    if (jsonError.error != QJsonParseError::NoError && !doc.isNull()) {
        qDebug() << "Json格式錯誤！" << jsonError.error;
        return error;
    }
    //qDebug()<<doc;
    QJsonObject rootObj = doc.object();
    //qDebug()<<rootObj;
    qDebug()<<loc;
    QJsonArray dataArray;
    QJsonObject tmp;

    if(!gp)
    {
        dataArray=rootObj.value("data").toObject().value("structure").toObject().value("dimensions").toObject().value("series").toArray();
        analysis_count=dataArray.size();
    }
        else
    {
        QString series_value="0";
        for(int i=0;i<analysis_count-1;i++)
        {
            series_value+=":0";
        }
        tmp=rootObj.value("data").toObject().value("dataSets").toArray()[0].toObject().value("series").toObject().value(series_value).toObject().value("observations").toObject();
        qDebug()<<series_value;
        qDebug()<<rootObj.value("data").toObject().value("dataSets").toArray()[0].toObject().value("series").toObject().value(series_value).toObject().value("observations").toObject();
        for(int i=0;i<tmp.count();i++)
        {
            dataArray.append(tmp.value(QString::number(i)));
        }
    }
    return dataArray;
}

void dashboard::on_ListButton_clicked()
{

    int index=ui->data_base_comboBox->currentIndex();
    if(index!=0)
    {
        ui->element1_comboBox->setEnabled(true);
        ui->element2_comboBox->setEnabled(true);
        ui->element3_comboBox->setEnabled(true);
        ui->StartYearcomboBox->setEnabled(true);
        ui->EndYearcomboBox->setEnabled(true);
        ui->element1_comboBox->clear();
        ui->element2_comboBox->clear();
        ui->element3_comboBox->clear();
        QString fileloc=QDir::currentPath()+"/download/"+datalistnumber[index-1]+"_datalist.json";
        QJsonArray pointer=readjson(fileloc);
        for(int i=0;i<pointer[0].toObject().value("values").toArray().count();i++)
        {
            ui->element1_comboBox->addItem(pointer[0].toObject().value("values").toArray()[i].toObject().value("name").toString());
        }
        if(pointer.size()==2)
        {
            for(int i=0;i<pointer[1].toObject().value("values").toArray().count();i++)
            {
                ui->element2_comboBox->addItem(pointer[1].toObject().value("values").toArray()[i].toObject().value("name").toString());
            }
        }
        else if(pointer.size()==3)
        {
            for(int i=0;i<pointer[2].toObject().value("values").toArray().count();i++)
            {
                ui->element2_comboBox->addItem(pointer[2].toObject().value("values").toArray()[i].toObject().value("name").toString());
            }
        }

        ui->dowload->setEnabled(true);
    }
    else
        ui->dowload->setEnabled(false);
    ui->dowload->setEnabled(true);
}



////////////////////////////////直方圖//////////////////////////////////////////
void dashboard::on_Bar_chart_clicked()
{

    QJsonArray data=readjson(analysis_filePath,1);
    QBarSeries *series = new QBarSeries();

    QBarSet *set = new QBarSet("Values");
    //*set << 6 << 4 << 8 << 5 << 1 << 3 << 6 << 3 << 2;
    for(int i=0;i<data.count();i++)
    {
        double t=data.at(i).toArray()[0].toDouble();
        *set<<t;
    }
    series->append(set);
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->setTitle(ui->data_base_comboBox->currentText()+"   "+ui->element1_comboBox->currentText());

    QStringList categories;
    //categories << "0" << "2" << "3" << "10" << "11" << "13" << "17" << "18" << "20";
    QStringList startyearlist=ui->StartYearcomboBox->currentText().split(" ");
    QStringList endyearlist=ui->EndYearcomboBox->currentText().split(" ");
    int startyear=startyearlist[0].toInt();
    int endyear=endyearlist[0].toInt();
    for(int i=startyear;i<=endyear;i++)
    {
        categories<<QString::number(i)+"年";
    }

    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    QValueAxis *axisY = new QValueAxis();
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    ui->display->removeWidget(ChartView);
    ChartView = new QChartView(this);
    ChartView->setChart(chart);
    ui->display->addWidget(ChartView);

}

////////////////////////////////折線圖//////////////////////////////////////////
void dashboard::on_Line_chart_clicked()
{
    QJsonArray data=readjson(analysis_filePath,1);
    QLineSeries *series = new QLineSeries();
    QStringList startyearlist=ui->StartYearcomboBox->currentText().split(" ");
    int startyear=startyearlist[0].toInt();
    for(int i=0;i<data.count();i++)
    {
        double t=data.at(i).toArray()[0].toDouble();
        series->append(startyear+i, t);
    }
    /**series << QPointF(11, 1) << QPointF(13, 3) << QPointF(17, 6)
            << QPointF(18, 3) << QPointF(20, 2);*/
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(ui->data_base_comboBox->currentText()+"   "+ui->element1_comboBox->currentText());

    ui->display->removeWidget(ChartView);
    ChartView = new QChartView(this);
    ChartView->setChart(chart);
    ui->display->addWidget(ChartView);
}

////////////////////////////////點圖//////////////////////////////////////////
void dashboard::on_point_chart_clicked()
{
    QJsonArray data=readjson(analysis_filePath,1);
    QScatterSeries *series = new QScatterSeries();
    //series->setMarkerSize(10);
    QStringList startyearlist=ui->StartYearcomboBox->currentText().split(" ");
    int startyear=startyearlist[0].toInt();
    for(int i=0;i<data.count();i++)
    {
        double t=data.at(i).toArray()[0].toDouble();
        series->append(startyear+i, t);
    }
    QChart *chart = new QChart();
    chart->legend()->hide();
    chart->addSeries(series);
    chart->createDefaultAxes();
    chart->setTitle(ui->data_base_comboBox->currentText()+"   "+ui->element1_comboBox->currentText());

    ui->display->removeWidget(ChartView);
    ChartView = new QChartView(this);
    ChartView->setChart(chart);
    ui->display->addWidget(ChartView);

}

////////////////////////////////圓餅圖//////////////////////////////////////////
void dashboard::on_Pie_Chart_clicked()
{
    QJsonArray data=readjson(analysis_filePath,1);
    QPieSeries *series = new QPieSeries();
    QStringList startyearlist=ui->StartYearcomboBox->currentText().split(" ");
    int startyear=startyearlist[0].toInt();
    for(int i=0;i<data.count();i++)
    {
        double t=data.at(i).toArray()[0].toDouble();
        series->append(QString::number(startyear+i), t);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle(ui->data_base_comboBox->currentText()+"   "+ui->element1_comboBox->currentText());

    ui->display->removeWidget(ChartView);
    ChartView = new QChartView(this);
    ChartView->setChart(chart);
    ui->display->addWidget(ChartView);
}

