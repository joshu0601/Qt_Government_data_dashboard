#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QDialog>
#include <qfiledialog.h>
#include <QProgressDialog>
#include <QFile>
#include <QtNetwork>
#include <QDebug>
#include <QUrl>
#include <QMessageBox>
#include <QTextStream>
#include <QTextCodec>

#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument >
#include <QJsonValue>
#include <QJsonParseError>

#include <QChartView>
#include <QtCharts>
QT_BEGIN_NAMESPACE
namespace Ui {
class dashboard;
}
QT_END_NAMESPACE

class ProgressDialog : public QProgressDialog {
    Q_OBJECT

public:
    explicit ProgressDialog(const QUrl &url, QWidget *parent = nullptr);

public slots:
    void networkReplyProgress(qint64 bytesRead, qint64 totalBytes);
};


class dashboard : public QDialog
{
    Q_OBJECT

public:
    dashboard(QWidget *parent = nullptr);
    void startRequest(const QUrl &requestedUrl);
    ~dashboard();
    QJsonArray readjson(QString loc,bool gp);
private slots:

    void on_dowload_clicked();

    void downloadFile(QString url,QString fn,bool en);
    void cancelDownload();
    void httpFinished();
    void httpReadyRead();

    void on_data_base_comboBox_currentIndexChanged(int index);

    void on_ListButton_clicked();


    void on_Bar_chart_clicked();

    void on_Line_chart_clicked();

    void on_point_chart_clicked();

    void on_Pie_Chart_clicked();

private:
    std::unique_ptr<QFile> openFileForWrite(const QString &fileName);
    QNetworkAccessManager qnam;
    QScopedPointer<QNetworkReply, QScopedPointerDeleteLater> reply;
    bool httpRequestAborted = false;
    std::unique_ptr<QFile> file;
    Ui::dashboard *ui;
    QString analysis_fileName;
    QString analysis_filePath;
    int analysis_count;


    QChart *createScatterChart();
    QChart *createPieChart();
    QChart *createHistogramChart();
    QChart *createLineChart();

    QChartView *ChartView;

};
#endif // DASHBOARD_H
