#include "addpat.h"
#include "ui_addpat.h"
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

addPat::addPat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addPat)
{
    ui->setupUi(this);
}

addPat::~addPat()
{
    delete ui;
}

// close button
void addPat::on_pushButton_2_clicked()
{
    this->close();
}

// add query
void addPat::on_pushButton_clicked()
{
    QString patientName = ui->lineEdit->text();
    QString disease = ui->lineEdit_2->text();

    if (patientName.isEmpty() || disease.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please fill in all fields.");
        return;
    }

    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM patient WHERE name = :name");
    checkQuery.bindValue(":name", patientName);

    if (!checkQuery.exec()) {
        QMessageBox::critical(this, "Database Error",
                              "Failed to query the database.\n" +
                                  checkQuery.lastError().text());
        return;
    }

    checkQuery.next();
    int count = checkQuery.value(0).toInt();
    if (count > 0) {
        QMessageBox::warning(this, "Duplicate Entry",
                             "A patient with the same name already exists in the database.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO patient (name, disease) VALUES (:name, :disease)");
    query.bindValue(":name", patientName);
    query.bindValue(":disease", disease);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Patient added successfully.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    } else {
        QMessageBox::critical(this, "Error",
                              "Failed to add patient to the database.\n" +
                                  query.lastError().text());
    }
}

