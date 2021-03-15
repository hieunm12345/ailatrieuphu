#include "3danhsachnguoichoi.h"
#include "ui_3danhsachnguoichoi.h"

DanhSachNguoiChoi::DanhSachNguoiChoi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DanhSachNguoiChoi)
{
    ui->setupUi(this);
}

DanhSachNguoiChoi::~DanhSachNguoiChoi()
{
    delete ui;
}
