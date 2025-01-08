#ifndef ADDPAT_H
#define ADDPAT_H

#include <QDialog>

namespace Ui {
class addPat;
}

class addPat : public QDialog
{
    Q_OBJECT

public:
    explicit addPat(QWidget *parent = nullptr);
    ~addPat();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::addPat *ui;
};

#endif // ADDPAT_H
