#include "adddoc.h"
#include "ui_adddoc.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QVBoxLayout>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QSqlError>

addDoc::addDoc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addDoc)
{
    ui->setupUi(this);
}
addDoc::~addDoc()
{
    delete ui;
}

// Close button handler
void addDoc::on_pushButton_2_clicked()
{
    this->close();
}

// add button handler
void addDoc::on_pushButton_clicked()
{
    QString doctorName = ui->lineEdit->text();
    QString expertise = ui->lineEdit_2->text();

    if (doctorName.isEmpty() || expertise.isEmpty()) {
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
    checkQuery.prepare("SELECT COUNT(*) FROM doctor WHERE name = :name");
    checkQuery.bindValue(":name", doctorName);

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
                             "A doctor with the same name already exists in the database.");
        return;
    }

    QSqlQuery query;
    query.prepare("INSERT INTO doctor (name, expertise) VALUES (:name, :expertise)");
    query.bindValue(":name", doctorName);
    query.bindValue(":expertise", expertise);

    if (query.exec()) {
        QMessageBox::information(this, "Success", "Doctor added successfully.");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    } else {
        QMessageBox::critical(this, "Error",
                              "Failed to add doctor to the database.\n" +
                                  query.lastError().text());
    }
}
