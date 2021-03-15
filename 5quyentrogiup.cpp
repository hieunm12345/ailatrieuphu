#include "5quyentrogiup.h"
#include "ui_5quyentrogiup.h"

QuyenTroGiup::QuyenTroGiup(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QuyenTroGiup)
{
    ui->setupUi(this);
    ui->p1->setStyleSheet("Text-align:left");
    ui->p2->setStyleSheet("Text-align:left");
    ui->p3->setStyleSheet("Text-align:left");
    ui->p4->setStyleSheet("Text-align:left");

}

QuyenTroGiup::~QuyenTroGiup()
{
    delete ui;
}
