#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
  : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
  ui->setupUi(this);

  ui->cbType->addItem("TASK");
  ui->cbType->setCurrentIndex(0);

  ui->cbStatus->addItem("IN PROGRESS");
  ui->cbStatus->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_pushBtnClose_released()
{
    close();
}
