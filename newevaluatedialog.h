#ifndef NEWEVALUATEDIALOG_H
#define NEWEVALUATEDIALOG_H

#include <QDialog>

namespace Ui {
class NewEvaluateDialog;
}

class NewEvaluateDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NewEvaluateDialog(QWidget *parent = 0);
    ~NewEvaluateDialog();

private slots:
    void on_pushButton_sumit_clicked();
    void on_pushButton_OK_clicked();
    void on_pushButton_Cancel_clicked();
    void on_pushButton_unregiste_clicked();

private:
    Ui::NewEvaluateDialog *ui;
};

#endif // NEWEVALUATEDIALOG_H
