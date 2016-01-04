#include "newevaluatedialog.h"
#include "ui_newevaluatedialog.h"
#include "dataopr.h"

NewEvaluateDialog::NewEvaluateDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NewEvaluateDialog)
{
    ui->setupUi(this);
}

NewEvaluateDialog::~NewEvaluateDialog()
{
    delete ui;
}

void NewEvaluateDialog::on_pushButton_sumit_clicked()
{
    DataOpr::GetDataManage()->Register(ui->lineEdit_EvaPointName->text(),
                                       ui->lineEdit_LayerRef->text(),
                                       ui->textEdit_Condition->toPlainText(),
                                       ui->textEdit_Solution->toPlainText());
    DataOpr::GetDataManage()->Save();
}

void NewEvaluateDialog::on_pushButton_unregiste_clicked()
{
    DataOpr::GetDataManage()->UnRegister(ui->lineEdit_EvaPointName->text());
}

void NewEvaluateDialog::on_pushButton_OK_clicked()
{
    on_pushButton_sumit_clicked();
    this->close();
}

void NewEvaluateDialog::on_pushButton_Cancel_clicked()
{
    this->close();
}
