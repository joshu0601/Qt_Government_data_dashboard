/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout_2;
    QComboBox *data_base_comboBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QPushButton *ListButton;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *EndYearcomboBox;
    QComboBox *element1_comboBox;
    QLabel *element1_label;
    QComboBox *StartYearcomboBox;
    QLabel *element2_label;
    QLabel *StartYear_label;
    QComboBox *element2_comboBox;
    QLabel *EndYearlabel;
    QComboBox *element3_comboBox;
    QLabel *element3_label;
    QPushButton *dowload;
    QLabel *InputNameLabel;
    QLabel *InputFileLabel;
    QFrame *line_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *verticalGroupBox1;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *display;
    QGridLayout *chart_select;
    QRadioButton *point_chart;
    QRadioButton *Pie_Chart;
    QRadioButton *Bar_chart;
    QRadioButton *Line_chart;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(650, 854);
        verticalLayout_3 = new QVBoxLayout(dashboard);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label = new QLabel(dashboard);
        label->setObjectName("label");

        verticalLayout_3->addWidget(label);

        verticalGroupBox = new QGroupBox(dashboard);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalLayout_2 = new QVBoxLayout(verticalGroupBox);
        verticalLayout_2->setObjectName("verticalLayout_2");
        data_base_comboBox = new QComboBox(verticalGroupBox);
        data_base_comboBox->setObjectName("data_base_comboBox");

        verticalLayout_2->addWidget(data_base_comboBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_3 = new QLabel(verticalGroupBox);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        ListButton = new QPushButton(verticalGroupBox);
        ListButton->setObjectName("ListButton");

        horizontalLayout->addWidget(ListButton);


        verticalLayout_2->addLayout(horizontalLayout);


        verticalLayout_3->addWidget(verticalGroupBox);

        label_2 = new QLabel(dashboard);
        label_2->setObjectName("label_2");

        verticalLayout_3->addWidget(label_2);

        groupBox = new QGroupBox(dashboard);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        EndYearcomboBox = new QComboBox(groupBox);
        EndYearcomboBox->setObjectName("EndYearcomboBox");

        gridLayout_3->addWidget(EndYearcomboBox, 5, 2, 1, 1);

        element1_comboBox = new QComboBox(groupBox);
        element1_comboBox->setObjectName("element1_comboBox");

        gridLayout_3->addWidget(element1_comboBox, 1, 2, 1, 1);

        element1_label = new QLabel(groupBox);
        element1_label->setObjectName("element1_label");
        element1_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(element1_label, 1, 1, 1, 1);

        StartYearcomboBox = new QComboBox(groupBox);
        StartYearcomboBox->setObjectName("StartYearcomboBox");

        gridLayout_3->addWidget(StartYearcomboBox, 4, 2, 1, 1);

        element2_label = new QLabel(groupBox);
        element2_label->setObjectName("element2_label");
        element2_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(element2_label, 2, 1, 1, 1);

        StartYear_label = new QLabel(groupBox);
        StartYear_label->setObjectName("StartYear_label");
        StartYear_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(StartYear_label, 4, 1, 1, 1);

        element2_comboBox = new QComboBox(groupBox);
        element2_comboBox->setObjectName("element2_comboBox");

        gridLayout_3->addWidget(element2_comboBox, 2, 2, 1, 1);

        EndYearlabel = new QLabel(groupBox);
        EndYearlabel->setObjectName("EndYearlabel");
        EndYearlabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(EndYearlabel, 5, 1, 1, 1);

        element3_comboBox = new QComboBox(groupBox);
        element3_comboBox->setObjectName("element3_comboBox");

        gridLayout_3->addWidget(element3_comboBox, 3, 2, 1, 1);

        element3_label = new QLabel(groupBox);
        element3_label->setObjectName("element3_label");
        element3_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(element3_label, 3, 1, 1, 1);


        verticalLayout_3->addWidget(groupBox);

        dowload = new QPushButton(dashboard);
        dowload->setObjectName("dowload");

        verticalLayout_3->addWidget(dowload);

        InputNameLabel = new QLabel(dashboard);
        InputNameLabel->setObjectName("InputNameLabel");

        verticalLayout_3->addWidget(InputNameLabel);

        InputFileLabel = new QLabel(dashboard);
        InputFileLabel->setObjectName("InputFileLabel");

        verticalLayout_3->addWidget(InputFileLabel);

        line_2 = new QFrame(dashboard);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalGroupBox1 = new QGroupBox(dashboard);
        verticalGroupBox1->setObjectName("verticalGroupBox1");
        verticalLayout = new QVBoxLayout(verticalGroupBox1);
        verticalLayout->setObjectName("verticalLayout");
        display = new QVBoxLayout();
        display->setObjectName("display");

        verticalLayout->addLayout(display);

        chart_select = new QGridLayout();
        chart_select->setObjectName("chart_select");
        point_chart = new QRadioButton(verticalGroupBox1);
        point_chart->setObjectName("point_chart");

        chart_select->addWidget(point_chart, 0, 2, 1, 1);

        Pie_Chart = new QRadioButton(verticalGroupBox1);
        Pie_Chart->setObjectName("Pie_Chart");

        chart_select->addWidget(Pie_Chart, 0, 3, 1, 1);

        Bar_chart = new QRadioButton(verticalGroupBox1);
        Bar_chart->setObjectName("Bar_chart");

        chart_select->addWidget(Bar_chart, 0, 0, 1, 1);

        Line_chart = new QRadioButton(verticalGroupBox1);
        Line_chart->setObjectName("Line_chart");

        chart_select->addWidget(Line_chart, 0, 1, 1, 1);


        verticalLayout->addLayout(chart_select);


        verticalLayout_4->addWidget(verticalGroupBox1);


        verticalLayout_3->addLayout(verticalLayout_4);


        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "dashboard", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "\351\201\270\346\223\207\351\240\205\347\233\256", nullptr));
        label_3->setText(QString());
        ListButton->setText(QCoreApplication::translate("dashboard", "List", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\351\240\205", nullptr));
        element1_label->setText(QCoreApplication::translate("dashboard", "\346\214\207\346\250\2311", nullptr));
        element2_label->setText(QCoreApplication::translate("dashboard", "\346\214\207\346\250\2312", nullptr));
        StartYear_label->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\351\226\213\345\247\213\345\271\264\345\210\206", nullptr));
        EndYearlabel->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\347\265\220\346\235\237\345\271\264\345\210\206", nullptr));
        element3_label->setText(QCoreApplication::translate("dashboard", "\346\214\207\346\250\2313", nullptr));
        dowload->setText(QCoreApplication::translate("dashboard", "\350\274\211\345\205\245/\344\270\213\350\274\211", nullptr));
        InputNameLabel->setText(QCoreApplication::translate("dashboard", "\346\252\224\346\241\210\345\220\215\347\250\261:", nullptr));
        InputFileLabel->setText(QCoreApplication::translate("dashboard", "\346\252\224\346\241\210\344\275\215\347\275\256:", nullptr));
        point_chart->setText(QCoreApplication::translate("dashboard", "\351\273\236\345\234\226", nullptr));
        Pie_Chart->setText(QCoreApplication::translate("dashboard", "\345\234\223\351\244\205\345\234\226", nullptr));
        Bar_chart->setText(QCoreApplication::translate("dashboard", "\347\233\264\346\226\271\345\234\226", nullptr));
        Line_chart->setText(QCoreApplication::translate("dashboard", "\346\212\230\347\267\232\345\234\226", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
