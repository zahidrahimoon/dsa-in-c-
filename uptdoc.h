#ifndef UPTDOC_H
#define UPTDOC_H

#include <QDialog>

namespace Ui {
class uptDoc;
}

class uptDoc : public QDialog
{
    Q_OBJECT

public:
    explicit uptDoc(QWidget *parent = nullptr);
    ~uptDoc();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::uptDoc *ui;
};

#endif // UPTDOC_H
