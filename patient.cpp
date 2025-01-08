#include "patient.h"
#include "ui_patient.h"
#include "addpat.h"
#include "viewpat.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include <QInputDialog>
#include "uptpat.h"

patient::patient(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::patient)
{
    ui->setupUi(this);
}

patient::~patient()
{
    delete ui;
}

void patient::on_pushButton_clicked()
{
    addPat addpat;
    addpat.setModal(true);
    addpat.exec();
}

void patient::on_pushButton_4_clicked()
{
    viewPat viewpat;
    viewpat.setModal(true);
    viewpat.exec();
}

// delete functionality
void patient::on_pushButton_3_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    bool ok;
    int patientId = QInputDialog::getInt(this, "Delete Patient",
                                         "Enter Patient ID to delete:",
                                         0, 0, 1000000, 1, &ok);

    if (!ok) {
        return;
    }

    QSqlQuery query;
    query.prepare("DELETE FROM patient WHERE id = :id");
    query.bindValue(":id", patientId);
    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to delete the patient.\n" +
                                  query.lastError().text());
        return;
    }

    if (query.numRowsAffected() > 0) {
        QMessageBox::information(this, "Success", "Patient deleted successfully.");
    } else {
        QMessageBox::warning(this, "Not Found", "No patient found with the specified ID.");
    }
}

void patient::on_pushButton_5_clicked()
{
    // go to update patient page
    uptPat uptPat;
    uptPat.setModal(true);
    uptPat.exec();
}


void patient::on_pushButton_6_clicked()
{
    this->close();
}

