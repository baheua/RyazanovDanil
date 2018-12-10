/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextEdit *plainTextEdit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *Metrics;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QLabel *label_SrKSMet;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_11;
    QLabel *label_SrKSMod;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QLabel *label_SrKSCl;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLabel *label_WMC;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_14;
    QLabel *label_DIT;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QLabel *label_NOC;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QLabel *label_RFC;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLabel *label_LCOM;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLabel *label_NORM;
    QPushButton *openfile;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *Lable_KolMet;
    QLabel *Kol_Met;
    QHBoxLayout *horizontalLayout_12;
    QLabel *Label_KolMod;
    QLabel *Kol_Mod;
    QLabel *Include;
    QHBoxLayout *horizontalLayout_13;
    QLabel *Label_KolClass;
    QLabel *Kol_Class;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(798, 613);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 13, 761, 301));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 330, 451, 218));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        Metrics = new QPushButton(layoutWidget);
        Metrics->setObjectName(QStringLiteral("Metrics"));

        horizontalLayout_10->addWidget(Metrics);


        verticalLayout_2->addLayout(horizontalLayout_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        label_SrKSMet = new QLabel(layoutWidget);
        label_SrKSMet->setObjectName(QStringLiteral("label_SrKSMet"));

        horizontalLayout->addWidget(label_SrKSMet);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_2->addWidget(label_11);

        label_SrKSMod = new QLabel(layoutWidget);
        label_SrKSMod->setObjectName(QStringLiteral("label_SrKSMod"));

        horizontalLayout_2->addWidget(label_SrKSMod);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_3->addWidget(label_12);

        label_SrKSCl = new QLabel(layoutWidget);
        label_SrKSCl->setObjectName(QStringLiteral("label_SrKSCl"));

        horizontalLayout_3->addWidget(label_SrKSCl);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_13 = new QLabel(layoutWidget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_4->addWidget(label_13);

        label_WMC = new QLabel(layoutWidget);
        label_WMC->setObjectName(QStringLiteral("label_WMC"));

        horizontalLayout_4->addWidget(label_WMC);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_5->addWidget(label_14);

        label_DIT = new QLabel(layoutWidget);
        label_DIT->setObjectName(QStringLiteral("label_DIT"));

        horizontalLayout_5->addWidget(label_DIT);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_6->addWidget(label);

        label_NOC = new QLabel(layoutWidget);
        label_NOC->setObjectName(QStringLiteral("label_NOC"));

        horizontalLayout_6->addWidget(label_NOC);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_7->addWidget(label_2);

        label_RFC = new QLabel(layoutWidget);
        label_RFC->setObjectName(QStringLiteral("label_RFC"));

        horizontalLayout_7->addWidget(label_RFC);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_8->addWidget(label_3);

        label_LCOM = new QLabel(layoutWidget);
        label_LCOM->setObjectName(QStringLiteral("label_LCOM"));

        horizontalLayout_8->addWidget(label_LCOM);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_9->addWidget(label_4);

        label_NORM = new QLabel(layoutWidget);
        label_NORM->setObjectName(QStringLiteral("label_NORM"));

        horizontalLayout_9->addWidget(label_NORM);


        verticalLayout->addLayout(horizontalLayout_9);


        verticalLayout_2->addLayout(verticalLayout);

        openfile = new QPushButton(centralWidget);
        openfile->setObjectName(QStringLiteral("openfile"));
        openfile->setGeometry(QRect(490, 330, 281, 23));
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(490, 360, 281, 59));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Lable_KolMet = new QLabel(layoutWidget1);
        Lable_KolMet->setObjectName(QStringLiteral("Lable_KolMet"));

        horizontalLayout_11->addWidget(Lable_KolMet);

        Kol_Met = new QLabel(layoutWidget1);
        Kol_Met->setObjectName(QStringLiteral("Kol_Met"));

        horizontalLayout_11->addWidget(Kol_Met);


        verticalLayout_3->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Label_KolMod = new QLabel(layoutWidget1);
        Label_KolMod->setObjectName(QStringLiteral("Label_KolMod"));

        horizontalLayout_12->addWidget(Label_KolMod);

        Kol_Mod = new QLabel(layoutWidget1);
        Kol_Mod->setObjectName(QStringLiteral("Kol_Mod"));

        horizontalLayout_12->addWidget(Kol_Mod);

        Include = new QLabel(layoutWidget1);
        Include->setObjectName(QStringLiteral("Include"));

        horizontalLayout_12->addWidget(Include);


        verticalLayout_3->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        Label_KolClass = new QLabel(layoutWidget1);
        Label_KolClass->setObjectName(QStringLiteral("Label_KolClass"));

        horizontalLayout_13->addWidget(Label_KolClass);

        Kol_Class = new QLabel(layoutWidget1);
        Kol_Class->setObjectName(QStringLiteral("Kol_Class"));

        horizontalLayout_13->addWidget(Kol_Class);


        verticalLayout_3->addLayout(horizontalLayout_13);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        layoutWidget->raise();
        plainTextEdit->raise();
        openfile->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 798, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OOMetrics", nullptr));
        Metrics->setText(QApplication::translate("MainWindow", "\320\237\320\276\321\201\321\207\320\270\321\202\320\260\321\202\321\214", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\274\320\265\321\202\320\276\320\264\320\276\320\262:", nullptr));
        label_SrKSMet->setText(QString());
        label_11->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\274\320\276\320\264\321\203\320\273\320\265\320\271:", nullptr));
        label_SrKSMod->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\320\265\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\201\321\202\321\200\320\276\320\272 \320\272\320\273\320\260\321\201\321\201\320\276\320\262:", nullptr));
        label_SrKSCl->setText(QString());
        label_13->setText(QApplication::translate("MainWindow", "\320\241\321\203\320\274\320\274\320\260\321\200\320\275\320\260\321\217 \321\201\320\273\320\276\320\266\320\275\320\276\321\201\321\202\321\214 \320\274\320\265\321\202\320\276\320\264\320\276\320\262 \320\272\320\273\320\260\321\201\321\201\320\260 (WMC):", nullptr));
        label_WMC->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "\320\223\320\273\321\203\320\261\320\270\320\275\320\260 \320\264\320\265\321\200\320\265\320\262\320\260 \320\275\320\260\321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\321\217 (DIT):", nullptr));
        label_DIT->setText(QString());
        label->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\275\320\265\320\277\320\276\321\201\321\200\320\265\320\264\321\201\321\202\320\262\320\265\320\275\320\275\321\213\321\205 \320\275\320\260\321\201\320\273\320\265\320\264\320\275\320\270\320\272\320\276\320\262 (NOC):", nullptr));
        label_NOC->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\202\320\276\320\264\320\276\320\262 \320\262 \320\274\320\275\320\276\320\266\320\265\321\201\321\202\320\262\320\265 \320\276\321\202\320\272\320\273\320\270\320\272\320\260 (RFC):", nullptr));
        label_RFC->setText(QString());
        label_3->setText(QApplication::translate("MainWindow", "\320\235\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\276\320\272 \321\201\321\206\320\265\320\277\320\273\320\265\320\275\320\270\321\217 \320\274\320\265\321\202\320\276\320\264\320\276\320\262 (LCOM):", nullptr));
        label_LCOM->setText(QString());
        label_4->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\321\213\320\267\320\276\320\262\320\276\320\262 \320\276\321\202\321\202\320\264\320\260\320\273\320\265\320\275\320\275\321\213\321\205 \320\274\320\265\321\202\320\276\320\264\320\276\320\262 (NORM):", nullptr));
        label_NORM->setText(QString());
        openfile->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        Lable_KolMet->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\265\321\202\320\276\320\264\320\276\320\262:", nullptr));
        Kol_Met->setText(QApplication::translate("MainWindow", "_", nullptr));
        Label_KolMod->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\276\320\264\321\203\320\273\320\265\320\271:", nullptr));
        Kol_Mod->setText(QApplication::translate("MainWindow", "_", nullptr));
        Include->setText(QApplication::translate("MainWindow", "_", nullptr));
        Label_KolClass->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\272\320\273\320\260\321\201\321\201\320\276\320\262:", nullptr));
        Kol_Class->setText(QApplication::translate("MainWindow", "_", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
