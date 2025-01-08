#ifndef ADDDOC_H
#define ADDDOC_H

#include <QDialog>

namespace Ui {
class addDoc;
}

class addDoc : public QDialog
{
    Q_OBJECT

public:
    explicit addDoc(QWidget *parent = nullptr);
    ~addDoc();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::addDoc *ui;
};

#endif // ADDDOC_H
