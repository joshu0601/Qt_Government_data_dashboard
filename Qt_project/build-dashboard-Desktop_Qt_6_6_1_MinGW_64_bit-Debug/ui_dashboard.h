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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_dashboard
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QComboBox *data_base_comboBox;
    QLabel *label_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QComboBox *element1_comboBox;
    QLabel *StartYear_label;
    QLabel *element1_label;
    QLabel *EndYearlabel;
    QComboBox *StartYearcomboBox;
    QComboBox *EndYearcomboBox;
    QPushButton *dowload;
    QLabel *InputNameLabel;
    QLabel *InputFileLabel;
    QFrame *line_2;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_2;
    QRadioButton *Pie_Chart;
    QRadioButton *Bar_chart;
    QRadioButton *Line_chart;
    QRadioButton *point_chart;
    QPushButton *startButton;

    void setupUi(QDialog *dashboard)
    {
        if (dashboard->objectName().isEmpty())
            dashboard->setObjectName("dashboard");
        dashboard->resize(650, 690);
        verticalLayout_2 = new QVBoxLayout(dashboard);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label = new QLabel(dashboard);
        label->setObjectName("label");

        verticalLayout_2->addWidget(label);

        data_base_comboBox = new QComboBox(dashboard);
        data_base_comboBox->setObjectName("data_base_comboBox");

        verticalLayout_2->addWidget(data_base_comboBox);

        label_2 = new QLabel(dashboard);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        groupBox = new QGroupBox(dashboard);
        groupBox->setObjectName("groupBox");
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName("gridLayout_3");
        element1_comboBox = new QComboBox(groupBox);
        element1_comboBox->setObjectName("element1_comboBox");

        gridLayout_3->addWidget(element1_comboBox, 0, 1, 1, 1);

        StartYear_label = new QLabel(groupBox);
        StartYear_label->setObjectName("StartYear_label");
        StartYear_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(StartYear_label, 1, 0, 1, 1);

        element1_label = new QLabel(groupBox);
        element1_label->setObjectName("element1_label");
        element1_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(element1_label, 0, 0, 1, 1);

        EndYearlabel = new QLabel(groupBox);
        EndYearlabel->setObjectName("EndYearlabel");
        EndYearlabel->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(EndYearlabel, 2, 0, 1, 1);

        StartYearcomboBox = new QComboBox(groupBox);
        StartYearcomboBox->setObjectName("StartYearcomboBox");

        gridLayout_3->addWidget(StartYearcomboBox, 1, 1, 1, 1);

        EndYearcomboBox = new QComboBox(groupBox);
        EndYearcomboBox->setObjectName("EndYearcomboBox");

        gridLayout_3->addWidget(EndYearcomboBox, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        dowload = new QPushButton(dashboard);
        dowload->setObjectName("dowload");

        verticalLayout_2->addWidget(dowload);

        InputNameLabel = new QLabel(dashboard);
        InputNameLabel->setObjectName("InputNameLabel");

        verticalLayout_2->addWidget(InputNameLabel);

        InputFileLabel = new QLabel(dashboard);
        InputFileLabel->setObjectName("InputFileLabel");

        verticalLayout_2->addWidget(InputFileLabel);

        line_2 = new QFrame(dashboard);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        verticalGroupBox = new QGroupBox(dashboard);
        verticalGroupBox->setObjectName("verticalGroupBox");
        verticalLayout = new QVBoxLayout(verticalGroupBox);
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(verticalGroupBox);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        Pie_Chart = new QRadioButton(verticalGroupBox);
        Pie_Chart->setObjectName("Pie_Chart");

        gridLayout_2->addWidget(Pie_Chart, 0, 3, 1, 1);

        Bar_chart = new QRadioButton(verticalGroupBox);
        Bar_chart->setObjectName("Bar_chart");

        gridLayout_2->addWidget(Bar_chart, 0, 0, 1, 1);

        Line_chart = new QRadioButton(verticalGroupBox);
        Line_chart->setObjectName("Line_chart");

        gridLayout_2->addWidget(Line_chart, 0, 1, 1, 1);

        point_chart = new QRadioButton(verticalGroupBox);
        point_chart->setObjectName("point_chart");

        gridLayout_2->addWidget(point_chart, 0, 2, 1, 1);


        verticalLayout->addLayout(gridLayout_2);

        startButton = new QPushButton(verticalGroupBox);
        startButton->setObjectName("startButton");

        verticalLayout->addWidget(startButton);


        verticalLayout_2->addWidget(verticalGroupBox);


        retranslateUi(dashboard);

        QMetaObject::connectSlotsByName(dashboard);
    } // setupUi

    void retranslateUi(QDialog *dashboard)
    {
        dashboard->setWindowTitle(QCoreApplication::translate("dashboard", "dashboard", nullptr));
        label->setText(QCoreApplication::translate("dashboard", "\351\201\270\346\223\207\351\240\205\347\233\256", nullptr));
        label_2->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\351\240\205", nullptr));
        StartYear_label->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\351\226\213\345\247\213\345\271\264\345\210\206", nullptr));
        element1_label->setText(QCoreApplication::translate("dashboard", "\346\214\207\346\250\231", nullptr));
        EndYearlabel->setText(QCoreApplication::translate("dashboard", "\347\265\261\350\250\210\347\265\220\346\235\237\345\271\264\345\210\206", nullptr));
        dowload->setText(QCoreApplication::translate("dashboard", "\344\270\213\350\274\211", nullptr));
        InputNameLabel->setText(QCoreApplication::translate("dashboard", "\346\252\224\346\241\210\345\220\215\347\250\261:", nullptr));
        InputFileLabel->setText(QCoreApplication::translate("dashboard", "\346\252\224\346\241\210\344\275\215\347\275\256:", nullptr));
        Pie_Chart->setText(QCoreApplication::translate("dashboard", "\345\234\223\351\244\205\345\234\226", nullptr));
        Bar_chart->setText(QCoreApplication::translate("dashboard", "\347\233\264\346\226\271\345\234\226", nullptr));
        Line_chart->setText(QCoreApplication::translate("dashboard", "\346\212\230\347\267\232\345\234\226", nullptr));
        point_chart->setText(QCoreApplication::translate("dashboard", "\351\273\236\345\234\226", nullptr));
        startButton->setText(QCoreApplication::translate("dashboard", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dashboard: public Ui_dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
