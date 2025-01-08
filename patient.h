#ifndef PATIENT_H
#define PATIENT_H

#include <QDialog>

namespace Ui {
class patient;
}

class patient : public QDialog
{
    Q_OBJECT

public:
    explicit patient(QWidget *parent = nullptr);
    ~patient();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::patient *ui;
};

#endif // PATIENT_H
