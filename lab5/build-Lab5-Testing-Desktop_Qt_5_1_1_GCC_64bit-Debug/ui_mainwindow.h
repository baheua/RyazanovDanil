/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *anlf;
    QLabel *anlc;
    QLabel *module;
    QLabel *inc;
    QLabel *norm;
    QLabel *rfc;
    QLabel *wmc;
    QLabel *lcom;
    QLabel *noc;
    QLabel *dit;
    QPushButton *result;
    QLabel *enter_code;
    QLabel *results;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_28;
    QLabel *label_22;
    QLabel *class_2;
    QRadioButton *radioload;
    QRadioButton *radiorun;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(700, 675);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 50, 671, 241));
        anlf = new QLabel(centralWidget);
        anlf->setObjectName(QStringLiteral("anlf"));
        anlf->setGeometry(QRect(550, 340, 101, 16));
        anlc = new QLabel(centralWidget);
        anlc->setObjectName(QStringLiteral("anlc"));
        anlc->setGeometry(QRect(550, 370, 101, 16));
        module = new QLabel(centralWidget);
        module->setObjectName(QStringLiteral("module"));
        module->setGeometry(QRect(550, 400, 101, 16));
        inc = new QLabel(centralWidget);
        inc->setObjectName(QStringLiteral("inc"));
        inc->setGeometry(QRect(550, 430, 101, 16));
        norm = new QLabel(centralWidget);
        norm->setObjectName(QStringLiteral("norm"));
        norm->setGeometry(QRect(550, 490, 101, 16));
        rfc = new QLabel(centralWidget);
        rfc->setObjectName(QStringLiteral("rfc"));
        rfc->setGeometry(QRect(550, 520, 101, 16));
        wmc = new QLabel(centralWidget);
        wmc->setObjectName(QStringLiteral("wmc"));
        wmc->setGeometry(QRect(550, 550, 101, 16));
        lcom = new QLabel(centralWidget);
        lcom->setObjectName(QStringLiteral("lcom"));
        lcom->setGeometry(QRect(550, 580, 101, 16));
        noc = new QLabel(centralWidget);
        noc->setObjectName(QStringLiteral("noc"));
        noc->setGeometry(QRect(550, 610, 101, 16));
        dit = new QLabel(centralWidget);
        dit->setObjectName(QStringLiteral("dit"));
        dit->setGeometry(QRect(550, 640, 101, 16));
        result = new QPushButton(centralWidget);
        result->setObjectName(QStringLiteral("result"));
        result->setGeometry(QRect(580, 10, 101, 31));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        result->setFont(font);
        enter_code = new QLabel(centralWidget);
        enter_code->setObjectName(QStringLiteral("enter_code"));
        enter_code->setGeometry(QRect(10, 10, 191, 41));
        QFont font1;
        font1.setPointSize(18);
        enter_code->setFont(font1);
        results = new QLabel(centralWidget);
        results->setObjectName(QStringLiteral("results"));
        results->setGeometry(QRect(10, 300, 191, 41));
        results->setFont(font1);
        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(10, 340, 521, 17));
        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 370, 521, 17));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(10, 400, 521, 17));
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(10, 430, 521, 17));
        label_19 = new QLabel(centralWidget);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(10, 490, 521, 17));
        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 520, 521, 17));
        label_21 = new QLabel(centralWidget);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(10, 550, 521, 17));
        label_23 = new QLabel(centralWidget);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(10, 580, 521, 17));
        label_24 = new QLabel(centralWidget);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(10, 610, 521, 17));
        label_28 = new QLabel(centralWidget);
        label_28->setObjectName(QStringLiteral("label_28"));
        label_28->setGeometry(QRect(10, 640, 521, 17));
        label_22 = new QLabel(centralWidget);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(10, 460, 521, 17));
        class_2 = new QLabel(centralWidget);
        class_2->setObjectName(QStringLiteral("class_2"));
        class_2->setGeometry(QRect(550, 460, 101, 16));
        radioload = new QRadioButton(centralWidget);
        radioload->setObjectName(QStringLiteral("radioload"));
        radioload->setGeometry(QRect(410, 10, 71, 23));
        radiorun = new QRadioButton(centralWidget);
        radiorun->setObjectName(QStringLiteral("radiorun"));
        radiorun->setGeometry(QRect(500, 10, 61, 23));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        plainTextEdit->setPlainText(QString());
        anlf->setText(QString());
        anlc->setText(QString());
        module->setText(QString());
        inc->setText(QString());
        norm->setText(QString());
        rfc->setText(QString());
        wmc->setText(QString());
        lcom->setText(QString());
        noc->setText(QString());
        dit->setText(QString());
        result->setText(QApplication::translate("MainWindow", "Push!", 0));
        enter_code->setText(QApplication::translate("MainWindow", "Enter your code:", 0));
        results->setText(QApplication::translate("MainWindow", "Results:", 0));
        label_15->setText(QApplication::translate("MainWindow", "\320\241\320\265\321\200\320\265\320\264\320\275\321\217 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\217\320\264\320\272\321\226\320\262 \320\264\320\273\321\217 \321\204\321\203\320\275\320\272\321\206\321\226\320\271 (\320\274\320\265\321\202\320\276\320\264\321\226\320\262)", 0));
        label_16->setText(QApplication::translate("MainWindow", "C\320\265\321\200\320\265\320\264\320\275\321\217 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\217\320\264\320\272\321\226\320\262, \321\211\320\276 \320\274\321\226\321\201\321\202\321\217\321\202\321\214 \320\262\320\270\321\205\321\226\320\264\320\275\320\270\320\271 \320\272\320\276\320\264 \320\264\320\273\321\217 \321\204\321\203\320\275\320\272\321\206\321\226\320\271 (\320\274\320\265\321\202\320\276\320\264\321\226\320\262)", 0));
        label_17->setText(QApplication::translate("MainWindow", "C\320\265\321\200\320\265\320\264\320\275\321\217 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\217\320\264\320\272\321\226\320\262 \320\264\320\273\321\217 \320\274\320\276\320\264\321\203\320\273\321\226\320\262", 0));
        label_18->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\217\320\264\320\272\321\226\320\262 \"#include\"", 0));
        label_19->setText(QApplication::translate("MainWindow", "\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\262\320\270\320\272\320\273\320\270\320\272\321\226\320\262 \320\262\321\226\320\264\320\264\320\260\320\273\320\265\320\275\320\270\321\205 \320\274\320\265\321\202\320\276\320\264\321\226\320\262 (NORM)", 0));
        label_20->setText(QApplication::translate("MainWindow", "\320\222\321\226\320\264\320\263\321\203\320\272 \320\275\320\260 \320\272\320\273\320\260\321\201 (RFC)", 0));
        label_21->setText(QApplication::translate("MainWindow", "\320\227\320\262\320\260\320\266\320\265\320\275\320\260 \320\275\320\260\321\201\320\270\321\207\320\265\320\275\321\226\321\201\321\202\321\214 \320\272\320\273\320\260\321\201\321\203 (WMC)", 0));
        label_23->setText(QApplication::translate("MainWindow", "H\320\265\320\264\320\276\320\273\321\226\320\272 \320\267\320\262\342\200\231\321\217\320\267\320\275\320\276\321\201\321\202\321\226 \320\274\320\265\321\202\320\276\320\264\321\226\320\262 (LCOM)", 0));
        label_24->setText(QApplication::translate("MainWindow", "K\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \320\275\320\260\321\211\320\260\320\264\320\272\321\226\320\262 (NOC)", 0));
        label_28->setText(QApplication::translate("MainWindow", "\320\223\320\273\320\270\320\261\320\270\320\275\320\260 \320\264\320\265\321\200\320\265\320\262\320\260 \321\201\320\277\320\260\320\264\320\272\321\203\320\262\320\260\320\275\320\275\321\217 (DIT)", 0));
        label_22->setText(QApplication::translate("MainWindow", "C\320\265\321\200\320\265\320\264\320\275\321\217 \320\272\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214 \321\200\321\217\320\264\320\272\321\226\320\262 \320\264\320\273\321\217 \320\272\320\273\320\260\321\201\321\226\320\262", 0));
        class_2->setText(QString());
        radioload->setText(QApplication::translate("MainWindow", "Load", 0));
        radiorun->setText(QApplication::translate("MainWindow", "Run", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
