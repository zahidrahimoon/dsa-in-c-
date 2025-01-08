#ifndef UPTPAT_H
#define UPTPAT_H

#include <QDialog>

namespace Ui {
class uptPat;
}

class uptPat : public QDialog
{
    Q_OBJECT

public:
    explicit uptPat(QWidget *parent = nullptr);
    ~uptPat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::uptPat *ui;
};

#endif // UPTPAT_H
