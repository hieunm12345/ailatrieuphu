#include "4manhinhcauhoi.h"
#include "ui_4manhinhcauhoi.h"

ManHinhCauHoi::ManHinhCauHoi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManHinhCauHoi)
{
    ui->setupUi(this);
}

ManHinhCauHoi::~ManHinhCauHoi()
{
    delete ui;
}
