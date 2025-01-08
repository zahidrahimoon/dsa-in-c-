#include "uptpat.h"
#include "ui_uptpat.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

uptPat::uptPat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::uptPat)
{
    ui->setupUi(this);
}

uptPat::~uptPat()
{
    delete ui;
}

// Back Button
void uptPat::on_pushButton_2_clicked()
{
    this->close(); // Closes the dialog
}

// Search Button
void uptPat::on_pushButton_3_clicked()
{
    QString patientId = ui->lineEdit_3->text();

    if (patientId.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Patient ID to search.");
        return;
    }

    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT name, disease FROM patient WHERE id = :id");
    query.bindValue(":id", patientId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to search for the patient.\n" +
                                  query.lastError().text());
        return;
    }

    if (query.next()) {
        ui->lineEdit->setText(query.value("name").toString());
        ui->lineEdit_2->setText(query.value("disease").toString());
        QMessageBox::information(this, "Patient Found", "Patient details have been loaded.");
    } else {
        QMessageBox::warning(this, "Not Found", "No patient found with the specified ID.");
    }
}

// Update Button
void uptPat::on_pushButton_clicked()
{
    QString patientId = ui->lineEdit_3->text();
    QString patientName = ui->lineEdit->text();
    QString patientDisease = ui->lineEdit_2->text();

    if (patientId.isEmpty() || patientName.isEmpty() || patientDisease.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "All fields must be filled.");
        return;
    }

    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }

    QSqlQuery query;
    query.prepare("UPDATE patient SET name = :name, disease = :disease WHERE id = :id");
    query.bindValue(":name", patientName);
    query.bindValue(":disease", patientDisease);
    query.bindValue(":id", patientId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to update the patient.\n" +
                                  query.lastError().text());
        return;
    }

    if (query.numRowsAffected() > 0) {
        QMessageBox::information(this, "Success", "Patient details updated successfully.");

        // Clear the fields
        ui->lineEdit_3->clear();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    } else {
        QMessageBox::warning(this, "Not Found", "No patient found with the specified ID.");
    }
}
