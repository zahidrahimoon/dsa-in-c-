#include "doctor.h"
#include "ui_doctor.h"
#include "adddoc.h"
#include "viewdoc.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QInputDialog>
#include "uptdoc.h"

Doctor::Doctor(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Doctor)
{
    ui->setupUi(this);
}

Doctor::~Doctor()
{
    delete ui;
}

void Doctor::on_pushButton_clicked()
{
    addDoc adddoc;
    adddoc.setModal(true);
    adddoc.exec();
}

void Doctor::on_pushButton_2_clicked()
{
    viewDoc viewdoc;
    viewdoc.setModal(true);
    viewdoc.exec();
}

//delete the row
void Doctor::on_pushButton_3_clicked()
{
    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    bool ok;
    int doctorId = QInputDialog::getInt(this, "Delete Doctor",
                                        "Enter Doctor ID to delete:",
                                        0, 0, 1000000, 1, &ok);

    if (!ok) {
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM doctor WHERE id = :id");
    query.bindValue(":id", doctorId);
    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to delete the doctor.\n" +
                                  query.lastError().text());
        return;
    }
    if (query.numRowsAffected() > 0) {
        QMessageBox::information(this, "Success", "Doctor deleted successfully.");
    } else {
        QMessageBox::warning(this, "Not Found", "No doctor found with the specified ID.");
    }
}

// move to uptDoc
void Doctor::on_pushButton_4_clicked()
{
    uptDoc uptDoc;
    uptDoc.setModal(true);
    uptDoc.exec();
}

//close button
void Doctor::on_pushButton_5_clicked()
{
    this->close();
}

