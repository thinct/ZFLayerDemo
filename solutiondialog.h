#ifndef SOLUTIONDIALOG_H
#define SOLUTIONDIALOG_H

#include <QDialog>

namespace Ui {
class SolutionDialog;
}

class SolutionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SolutionDialog(QWidget *parent = 0);
    ~SolutionDialog();

private:
    Ui::SolutionDialog *ui;
};

#endif // SOLUTIONDIALOG_H
