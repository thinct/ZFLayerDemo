/********************************************************************************
** Form generated from reading UI file 'newevaluatedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEVALUATEDIALOG_H
#define UI_NEWEVALUATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_NewEvaluateDialog
{
public:
    QLabel *label_EvaPointName;
    QLineEdit *lineEdit_EvaPointName;
    QLabel *label_LayerRef;
    QTextEdit *textEdit_Condition;
    QLabel *label_AdjustCondition;
    QLabel *label_Solution;
    QTextEdit *textEdit_Solution;
    QPushButton *pushButton_sumit;
    QPushButton *pushButton_OK;
    QPushButton *pushButton_Cancel;
    QLineEdit *lineEdit_LayerRef;
    QLabel *label;
    QPushButton *pushButton_unregiste;

    void setupUi(QDialog *NewEvaluateDialog)
    {
        if (NewEvaluateDialog->objectName().isEmpty())
            NewEvaluateDialog->setObjectName(QStringLiteral("NewEvaluateDialog"));
        NewEvaluateDialog->resize(505, 364);
        label_EvaPointName = new QLabel(NewEvaluateDialog);
        label_EvaPointName->setObjectName(QStringLiteral("label_EvaPointName"));
        label_EvaPointName->setGeometry(QRect(44, 30, 41, 16));
        lineEdit_EvaPointName = new QLineEdit(NewEvaluateDialog);
        lineEdit_EvaPointName->setObjectName(QStringLiteral("lineEdit_EvaPointName"));
        lineEdit_EvaPointName->setGeometry(QRect(100, 30, 261, 20));
        label_LayerRef = new QLabel(NewEvaluateDialog);
        label_LayerRef->setObjectName(QStringLiteral("label_LayerRef"));
        label_LayerRef->setGeometry(QRect(40, 60, 54, 12));
        textEdit_Condition = new QTextEdit(NewEvaluateDialog);
        textEdit_Condition->setObjectName(QStringLiteral("textEdit_Condition"));
        textEdit_Condition->setGeometry(QRect(100, 90, 381, 71));
        label_AdjustCondition = new QLabel(NewEvaluateDialog);
        label_AdjustCondition->setObjectName(QStringLiteral("label_AdjustCondition"));
        label_AdjustCondition->setGeometry(QRect(40, 90, 54, 12));
        label_Solution = new QLabel(NewEvaluateDialog);
        label_Solution->setObjectName(QStringLiteral("label_Solution"));
        label_Solution->setGeometry(QRect(40, 170, 54, 12));
        textEdit_Solution = new QTextEdit(NewEvaluateDialog);
        textEdit_Solution->setObjectName(QStringLiteral("textEdit_Solution"));
        textEdit_Solution->setGeometry(QRect(100, 170, 381, 151));
        pushButton_sumit = new QPushButton(NewEvaluateDialog);
        pushButton_sumit->setObjectName(QStringLiteral("pushButton_sumit"));
        pushButton_sumit->setGeometry(QRect(180, 332, 75, 21));
        pushButton_sumit->setAutoDefault(true);
        pushButton_OK = new QPushButton(NewEvaluateDialog);
        pushButton_OK->setObjectName(QStringLiteral("pushButton_OK"));
        pushButton_OK->setGeometry(QRect(340, 332, 75, 21));
        pushButton_Cancel = new QPushButton(NewEvaluateDialog);
        pushButton_Cancel->setObjectName(QStringLiteral("pushButton_Cancel"));
        pushButton_Cancel->setGeometry(QRect(420, 332, 75, 21));
        lineEdit_LayerRef = new QLineEdit(NewEvaluateDialog);
        lineEdit_LayerRef->setObjectName(QStringLiteral("lineEdit_LayerRef"));
        lineEdit_LayerRef->setGeometry(QRect(100, 57, 261, 21));
        label = new QLabel(NewEvaluateDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(370, 60, 111, 16));
        pushButton_unregiste = new QPushButton(NewEvaluateDialog);
        pushButton_unregiste->setObjectName(QStringLiteral("pushButton_unregiste"));
        pushButton_unregiste->setGeometry(QRect(260, 332, 75, 21));

        retranslateUi(NewEvaluateDialog);

        QMetaObject::connectSlotsByName(NewEvaluateDialog);
    } // setupUi

    void retranslateUi(QDialog *NewEvaluateDialog)
    {
        NewEvaluateDialog->setWindowTitle(QString());
        label_EvaPointName->setText(QApplication::translate("NewEvaluateDialog", "\350\257\204\344\274\260\347\202\271", 0));
        label_LayerRef->setText(QApplication::translate("NewEvaluateDialog", "\346\263\225\345\276\213\344\276\235\346\215\256:", 0));
        label_AdjustCondition->setText(QApplication::translate("NewEvaluateDialog", "\345\210\244\346\226\255\346\235\241\344\273\266:", 0));
        label_Solution->setText(QApplication::translate("NewEvaluateDialog", "\350\247\243\345\206\263\346\226\271\346\241\210:", 0));
        pushButton_sumit->setText(QApplication::translate("NewEvaluateDialog", "\346\217\220\344\272\244", 0));
        pushButton_OK->setText(QApplication::translate("NewEvaluateDialog", " \347\241\256\345\256\232", 0));
        pushButton_Cancel->setText(QApplication::translate("NewEvaluateDialog", "\345\217\226\346\266\210", 0));
        label->setText(QApplication::translate("NewEvaluateDialog", "(\346\263\225\345\276\213\346\235\241\344\276\213\346\243\200\347\264\242)", 0));
        pushButton_unregiste->setText(QApplication::translate("NewEvaluateDialog", "\346\263\250\351\224\200", 0));
    } // retranslateUi

};

namespace Ui {
    class NewEvaluateDialog: public Ui_NewEvaluateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEVALUATEDIALOG_H
