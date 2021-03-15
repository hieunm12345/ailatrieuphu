#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pb_start->setVisible(false);
    ui->lbl_loading->setVisible(true);
    connect(t, SIGNAL(timeout()), this, SLOT(onTimeOut()));
    ui->progressBar->setValue(0);
    t->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onTimeOut()
{
    a++;
    ui->progressBar->setValue(a * 20);
    if(a == 5)
    {
        t->stop();
        ui->pb_start->setVisible(true);
        ui->lbl_loading->setVisible(false);
    }
}

void MainWindow::on_pb_start_clicked()
{
    close();
    f2->show();
}
