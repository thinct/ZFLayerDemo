/********************************************************************************
** Form generated from reading UI file 'solutiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SOLUTIONDIALOG_H
#define UI_SOLUTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_SolutionDialog
{
public:
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;

    void setupUi(QDialog *SolutionDialog)
    {
        if (SolutionDialog->objectName().isEmpty())
            SolutionDialog->setObjectName(QStringLiteral("SolutionDialog"));
        SolutionDialog->resize(400, 289);
        label = new QLabel(SolutionDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 54, 12));
        textBrowser = new QTextBrowser(SolutionDialog);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 30, 381, 231));
        label_2 = new QLabel(SolutionDialog);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 260, 291, 31));

        retranslateUi(SolutionDialog);

        QMetaObject::connectSlotsByName(SolutionDialog);
    } // setupUi

    void retranslateUi(QDialog *SolutionDialog)
    {
        SolutionDialog->setWindowTitle(QString());
        label->setText(QApplication::translate("SolutionDialog", "\350\247\243\345\206\263\346\226\271\346\241\210:", 0));
        label_2->setText(QApplication::translate("SolutionDialog", "\345\246\202\346\234\211\347\226\221\351\227\256\357\274\214\346\225\254\350\257\267\350\201\224\347\263\273:\345\215\223\345\207\241\345\276\213\345\270\210\345\244\204\357\274\201", 0));
    } // retranslateUi

};

namespace Ui {
    class SolutionDialog: public Ui_SolutionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SOLUTIONDIALOG_H
