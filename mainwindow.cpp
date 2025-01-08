#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "login.h"
#include "QMessageBox"
#include "doctor.h"
#include "patient.h"
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>

void connectToDatabase() {
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setPort(3306);
    db.setDatabaseName("hms");
    db.setUserName("root");
    db.setPassword("zahid");

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
    } else {
        qDebug() << "Database connection successful!";
    }
}

void checkDrivers() {
    QStringList drivers = QSqlDatabase::drivers();
    qDebug() << "Available drivers:" << drivers;
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    checkDrivers();
    connectToDatabase();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    Doctor doctor;
    doctor.setModal(true);
    doctor.exec();
}

void MainWindow::on_pushButton_2_clicked()
{
    patient patient;
    patient.setModal(true);
    patient.exec();
}

// Logout functionality
void MainWindow::on_pushButton_3_clicked()
{
    this->close();
    login loginPage;
    loginPage.exec();
}
