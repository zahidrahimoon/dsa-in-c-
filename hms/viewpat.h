#ifndef VIEWPAT_H
#define VIEWPAT_H

#include <QDialog>

namespace Ui {
class viewPat;
}

class viewPat : public QDialog
{
    Q_OBJECT

public:
    explicit viewPat(QWidget *parent = nullptr);
    ~viewPat();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::viewPat *ui;
};

#endif // VIEWPAT_H
