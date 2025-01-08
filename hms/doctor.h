#ifndef DOCTOR_H
#define DOCTOR_H

#include <QDialog>

namespace Ui {
class Doctor;
}

class Doctor : public QDialog
{
    Q_OBJECT

public:
    explicit Doctor(QWidget *parent = nullptr);
    ~Doctor();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::Doctor *ui;
};

#endif // DOCTOR_H
