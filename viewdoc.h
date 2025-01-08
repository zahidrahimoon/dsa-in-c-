#ifndef VIEWDOC_H
#define VIEWDOC_H

#include <QDialog>

namespace Ui {
class viewDoc;
}

class viewDoc : public QDialog
{
    Q_OBJECT

public:
    explicit viewDoc(QWidget *parent = nullptr);
    ~viewDoc();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::viewDoc *ui;
};

#endif // VIEWDOC_H
