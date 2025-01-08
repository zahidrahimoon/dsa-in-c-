#include "viewdoc.h"
#include "ui_viewdoc.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QSqlError>

viewDoc::viewDoc(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewDoc)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "Name", "Expertise"});
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(30);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->verticalHeader()->setVisible(false);
}

viewDoc::~viewDoc()
{
    delete ui;
}

void viewDoc::on_pushButton_clicked()
{
    this->close();
}

// view
void viewDoc::on_pushButton_2_clicked()
{
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }
    QSqlQuery query;
    if (!query.exec("SELECT id, name, expertise FROM doctor")) { // Include the ID column
        QMessageBox::critical(this, "Error",
                              "Failed to retrieve doctor data.\n" +
                                  query.lastError().text());
        return;
    }
    ui->tableWidget->setRowCount(0);
    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("id").toString())); // Column 0: ID
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("name").toString())); // Column 1: Name
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("expertise").toString())); // Column 2: Expertise

        row++;
    }

    if (row == 0) {
        QMessageBox::information(this, "Doctor List", "No doctors found in the database.");
    }
}

// sort
void viewDoc::on_pushButton_3_clicked()
{
    static bool ascending = true;

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }

    QString sortOrder = ascending ? "ASC" : "DESC";
    QSqlQuery query;
    QString queryString = QString("SELECT id, name, expertise FROM doctor ORDER BY name %1").arg(sortOrder);
    if (!query.exec(queryString)) {
        QMessageBox::critical(this, "Error", "Failed to retrieve sorted doctor data.\n" + query.lastError().text());
        return;
    }
    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("id").toString())); // Column 0: ID
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("name").toString())); // Column 1: Name
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("expertise").toString())); // Column 2: Expertise

        row++;
    }

    if (row == 0) {
        QMessageBox::information(this, "Doctor List", "No doctors found in the database.");
    }
    ascending = !ascending;
}


