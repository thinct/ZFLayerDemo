#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlTableModel>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void on_pushButton_EvaStart_clicked();
    void on_pushButton_Registe_clicked();
    void on_pushButton_Exit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
