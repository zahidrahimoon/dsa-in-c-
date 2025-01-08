#include "uptdoc.h"
#include "ui_uptdoc.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

uptDoc::uptDoc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::uptDoc)
{
    ui->setupUi(this);
}

uptDoc::~uptDoc()
{
    delete ui;
}

// Back Button
void uptDoc::on_pushButton_2_clicked()
{
    this->close(); // Closes the dialog
}

// Search Button
void uptDoc::on_pushButton_3_clicked()
{
    QString doctorId = ui->lineEdit_3->text();

    if (doctorId.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Doctor ID to search.");
        return;
    }

    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    QSqlQuery query;
    query.prepare("SELECT name, expertise FROM doctor WHERE id = :id");
    query.bindValue(":id", doctorId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to search for the doctor.\n" +
                                  query.lastError().text());
        return;
    }

    if (query.next()) {
        ui->lineEdit->setText(query.value("name").toString());
        ui->lineEdit_2->setText(query.value("expertise").toString());
        QMessageBox::information(this, "Doctor Found", "Doctor details have been loaded.");
    } else {
        QMessageBox::warning(this, "Not Found", "No doctor found with the specified ID.");
    }
}

// Update Button
void uptDoc::on_pushButton_clicked()
{
    QString doctorId = ui->lineEdit_3->text();
    QString doctorName = ui->lineEdit->text();
    QString doctorExpertise = ui->lineEdit_2->text();

    if (doctorId.isEmpty() || doctorName.isEmpty() || doctorExpertise.isEmpty()) {
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
    query.prepare("UPDATE doctor SET name = :name, expertise = :expertise WHERE id = :id");
    query.bindValue(":name", doctorName);
    query.bindValue(":expertise", doctorExpertise);
    query.bindValue(":id", doctorId);

    if (!query.exec()) {
        QMessageBox::critical(this, "Error",
                              "Failed to update the doctor.\n" +
                                  query.lastError().text());
        return;
    }

    if (query.numRowsAffected() > 0) {
        QMessageBox::information(this, "Success", "Doctor details updated successfully.");
        ui->lineEdit_3->clear();
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();

    } else {
        QMessageBox::warning(this, "Not Found", "No doctor found with the specified ID.");
    }
}
