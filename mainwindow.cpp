#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setMaximumWidth(this->width());
    this->setMinimumWidth(this->width());
    this->setMaximumHeight(this->height());
    this->setMinimumHeight(this->height());

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this, "FirstTest", "Hello World!", QMessageBox::StandardButton::Ok, QMessageBox::StandardButton::Ok);
}

