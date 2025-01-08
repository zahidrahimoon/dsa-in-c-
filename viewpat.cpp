#include "viewpat.h"
#include "ui_viewpat.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>

viewPat::viewPat(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::viewPat)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels({"ID", "Patient Name", "Disease"});
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setDefaultSectionSize(30);
    ui->tableWidget->setAlternatingRowColors(true);
    ui->tableWidget->verticalHeader()->setVisible(false);
}


viewPat::~viewPat()
{
    delete ui;
}

void viewPat::on_pushButton_clicked()
{
    this->close();
}


// view pat
void viewPat::on_pushButton_2_clicked()
{
    // Get the global database connection
    QSqlDatabase db = QSqlDatabase::database();

    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }

    QSqlQuery query;
    if (!query.exec("SELECT id, name, disease FROM patient")) {
        QMessageBox::critical(this, "Error",
                              "Failed to retrieve patient data.\n" +
                                  query.lastError().text());
        return;
    }

    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("disease").toString()));

        row++;
    }

    if (row == 0) {
        QMessageBox::information(this, "Patient List", "No patients found in the database.");
    }
}

// sort
void viewPat::on_pushButton_3_clicked()
{
    static bool ascending = true;

    QSqlDatabase db = QSqlDatabase::database();
    if (!db.isOpen()) {
        QMessageBox::critical(this, "Database Error", "Database is not connected.");
        return;
    }

    QString sortOrder = ascending ? "ASC" : "DESC";
    QSqlQuery query;
    QString queryString = QString("SELECT id, name, disease FROM patient ORDER BY name %1").arg(sortOrder);

    if (!query.exec(queryString)) {
        QMessageBox::critical(this, "Error", "Failed to retrieve sorted patient data.\n" + query.lastError().text());
        return;
    }

    ui->tableWidget->setRowCount(0);

    int row = 0;
    while (query.next()) {
        ui->tableWidget->insertRow(row);
        ui->tableWidget->setItem(row, 0, new QTableWidgetItem(query.value("id").toString()));
        ui->tableWidget->setItem(row, 1, new QTableWidgetItem(query.value("name").toString()));
        ui->tableWidget->setItem(row, 2, new QTableWidgetItem(query.value("disease").toString()));

        row++;
    }

    if (row == 0) {
        QMessageBox::information(this, "Patient List", "No patients found in the database.");
    }

    ascending = !ascending;
}
