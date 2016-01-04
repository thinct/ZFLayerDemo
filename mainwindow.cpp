#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "newevaluatedialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_EvaStart_clicked()
{

}

void MainWindow::on_pushButton_Registe_clicked()
{
    NewEvaluateDialog dlg;
    dlg.exec();
}

void MainWindow::on_pushButton_Exit_clicked()
{
    this->close();
}
