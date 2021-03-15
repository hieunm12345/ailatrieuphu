#include "2manhinhdangnhap.h"
#include "ui_2manhinhdangnhap.h"

ManHinhDangNhap::ManHinhDangNhap(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ManHinhDangNhap)
{
    ui->setupUi(this);
}

ManHinhDangNhap::~ManHinhDangNhap()
{
    delete ui;
}

void ManHinhDangNhap::on_pb_start_clicked()
{
    if(ui->lineEdit_ten->text().length() > 0)
    {
        f4->show();
    } else
    {
        QMessageBox a;
                a.setWindowTitle("Thông báo lỗi");
                a.setText("Hãy điền tên người chơi");
                a.setButtonText(1, "OK");
                a.setIcon(QMessageBox::Warning);
                a.exec();
    }
}

void ManHinhDangNhap::on_pb_danhSach_clicked()
{
    f3->show();
}
