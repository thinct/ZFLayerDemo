/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_EvaPointName;
    QComboBox *comboBox_EvaPointName;
    QLabel *label_EvaValue;
    QTextBrowser *textBrowser_EvaValue;
    QLabel *label_EvaResult;
    QLabel *label_EvaPointNameTip;
    QPushButton *pushButton_EvaStart;
    QPushButton *pushButton_Registe;
    QPushButton *pushButton_Exit;
    QListView *listView_Result;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(581, 418);
        MainWindow->setContextMenuPolicy(Qt::NoContextMenu);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_EvaPointName = new QLabel(centralWidget);
        label_EvaPointName->setObjectName(QStringLiteral("label_EvaPointName"));
        label_EvaPointName->setGeometry(QRect(10, 20, 41, 16));
        comboBox_EvaPointName = new QComboBox(centralWidget);
        comboBox_EvaPointName->setObjectName(QStringLiteral("comboBox_EvaPointName"));
        comboBox_EvaPointName->setGeometry(QRect(70, 20, 151, 22));
        label_EvaValue = new QLabel(centralWidget);
        label_EvaValue->setObjectName(QStringLiteral("label_EvaValue"));
        label_EvaValue->setGeometry(QRect(10, 60, 54, 12));
        textBrowser_EvaValue = new QTextBrowser(centralWidget);
        textBrowser_EvaValue->setObjectName(QStringLiteral("textBrowser_EvaValue"));
        textBrowser_EvaValue->setGeometry(QRect(70, 60, 501, 51));
        textBrowser_EvaValue->setReadOnly(false);
        label_EvaResult = new QLabel(centralWidget);
        label_EvaResult->setObjectName(QStringLiteral("label_EvaResult"));
        label_EvaResult->setGeometry(QRect(10, 130, 54, 12));
        label_EvaPointNameTip = new QLabel(centralWidget);
        label_EvaPointNameTip->setObjectName(QStringLiteral("label_EvaPointNameTip"));
        label_EvaPointNameTip->setGeometry(QRect(240, 20, 221, 16));
        pushButton_EvaStart = new QPushButton(centralWidget);
        pushButton_EvaStart->setObjectName(QStringLiteral("pushButton_EvaStart"));
        pushButton_EvaStart->setGeometry(QRect(196, 340, 91, 41));
        pushButton_Registe = new QPushButton(centralWidget);
        pushButton_Registe->setObjectName(QStringLiteral("pushButton_Registe"));
        pushButton_Registe->setGeometry(QRect(346, 340, 91, 41));
        pushButton_Exit = new QPushButton(centralWidget);
        pushButton_Exit->setObjectName(QStringLiteral("pushButton_Exit"));
        pushButton_Exit->setGeometry(QRect(486, 340, 91, 41));
        listView_Result = new QListView(centralWidget);
        listView_Result->setObjectName(QStringLiteral("listView_Result"));
        listView_Result->setGeometry(QRect(70, 130, 501, 211));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 22));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", " \350\257\204\344\274\260\347\202\271\345\210\266\344\275\234\345\212\251\346\211\213", 0));
        label_EvaPointName->setText(QApplication::translate("MainWindow", "\350\257\204\344\274\260\347\202\271", 0));
        label_EvaValue->setText(QApplication::translate("MainWindow", "\350\257\204\344\274\260\345\206\205\345\256\271", 0));
        label_EvaResult->setText(QApplication::translate("MainWindow", "\351\243\216\351\231\251\346\212\245\345\221\212", 0));
        label_EvaPointNameTip->setText(QApplication::translate("MainWindow", "(\345\246\202\346\236\234\350\257\204\344\274\260\347\202\271\344\270\215\345\255\230\345\234\250\357\274\214\345\217\257\"\346\263\250\345\206\214\")", 0));
        pushButton_EvaStart->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\350\257\204\344\274\260", 0));
        pushButton_Registe->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", 0));
        pushButton_Exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
