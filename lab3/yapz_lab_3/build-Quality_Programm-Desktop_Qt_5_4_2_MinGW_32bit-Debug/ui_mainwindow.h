/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_15;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *SLOC;
    QLabel *label;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *EmptyLines;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *Comments;
    QLabel *label_3;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *OnlyCode;
    QLabel *label_4;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *VocOperandn2;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *VocOperatn1;
    QLabel *label_7;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *AllOperatN1;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *AllOperandN2;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *Cyclomatic;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *Voc;
    QLabel *label_11;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *N;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *V;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QPushButton *CI;
    QLabel *label_14;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(659, 504);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 40, 431, 401));
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 20, 131, 16));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(450, 40, 185, 399));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        SLOC = new QPushButton(widget);
        SLOC->setObjectName(QStringLiteral("SLOC"));

        horizontalLayout_13->addWidget(SLOC);

        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_13->addWidget(label);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        EmptyLines = new QPushButton(widget);
        EmptyLines->setObjectName(QStringLiteral("EmptyLines"));

        horizontalLayout_12->addWidget(EmptyLines);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_12->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        Comments = new QPushButton(widget);
        Comments->setObjectName(QStringLiteral("Comments"));

        horizontalLayout_11->addWidget(Comments);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_11->addWidget(label_3);

        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_11->addWidget(label_5);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        OnlyCode = new QPushButton(widget);
        OnlyCode->setObjectName(QStringLiteral("OnlyCode"));

        horizontalLayout_10->addWidget(OnlyCode);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_10->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        VocOperandn2 = new QPushButton(widget);
        VocOperandn2->setObjectName(QStringLiteral("VocOperandn2"));

        horizontalLayout_9->addWidget(VocOperandn2);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_9->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        VocOperatn1 = new QPushButton(widget);
        VocOperatn1->setObjectName(QStringLiteral("VocOperatn1"));

        horizontalLayout_8->addWidget(VocOperatn1);

        label_7 = new QLabel(widget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_8->addWidget(label_7);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        AllOperatN1 = new QPushButton(widget);
        AllOperatN1->setObjectName(QStringLiteral("AllOperatN1"));

        horizontalLayout_7->addWidget(AllOperatN1);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_7->addWidget(label_8);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        AllOperandN2 = new QPushButton(widget);
        AllOperandN2->setObjectName(QStringLiteral("AllOperandN2"));

        horizontalLayout_6->addWidget(AllOperandN2);

        label_9 = new QLabel(widget);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_6->addWidget(label_9);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        Cyclomatic = new QPushButton(widget);
        Cyclomatic->setObjectName(QStringLiteral("Cyclomatic"));

        horizontalLayout_5->addWidget(Cyclomatic);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_5->addWidget(label_10);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        Voc = new QPushButton(widget);
        Voc->setObjectName(QStringLiteral("Voc"));

        horizontalLayout_4->addWidget(Voc);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_4->addWidget(label_11);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        N = new QPushButton(widget);
        N->setObjectName(QStringLiteral("N"));

        horizontalLayout_3->addWidget(N);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_3->addWidget(label_12);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        V = new QPushButton(widget);
        V->setObjectName(QStringLiteral("V"));

        horizontalLayout_2->addWidget(V);

        label_13 = new QLabel(widget);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_2->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        CI = new QPushButton(widget);
        CI->setObjectName(QStringLiteral("CI"));

        horizontalLayout->addWidget(CI);

        label_14 = new QLabel(widget);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout->addWidget(label_14);


        verticalLayout->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 659, 21));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        plainTextEdit->setPlainText(QString());
        label_15->setText(QApplication::translate("MainWindow", "Paste code here", 0));
        SLOC->setText(QApplication::translate("MainWindow", "SLOC", 0));
        label->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        EmptyLines->setText(QApplication::translate("MainWindow", "Empty Lines", 0));
        label_2->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Comments->setText(QApplication::translate("MainWindow", "Comments", 0));
        label_3->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_5->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        OnlyCode->setText(QApplication::translate("MainWindow", "Only code", 0));
        label_4->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        VocOperandn2->setText(QApplication::translate("MainWindow", "VocOperand(n2)", 0));
        label_6->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        VocOperatn1->setText(QApplication::translate("MainWindow", "VocOperat(n1)", 0));
        label_7->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        AllOperatN1->setText(QApplication::translate("MainWindow", "AllOperat(N1)", 0));
        label_8->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        AllOperandN2->setText(QApplication::translate("MainWindow", "AllOperand(N2)", 0));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Cyclomatic->setText(QApplication::translate("MainWindow", "Cyclomatic", 0));
        label_10->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        Voc->setText(QApplication::translate("MainWindow", "Voc(n1+n2)", 0));
        label_11->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        N->setText(QApplication::translate("MainWindow", "N = N1+N2", 0));
        label_12->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        V->setText(QApplication::translate("MainWindow", "V = N*log2(n)", 0));
        label_13->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        CI->setText(QApplication::translate("MainWindow", "Cl", 0));
        label_14->setText(QApplication::translate("MainWindow", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
