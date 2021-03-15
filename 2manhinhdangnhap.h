#ifndef MANHINHDANGNHAP_H
#define MANHINHDANGNHAP_H

#include <QWidget>
#include <3danhsachnguoichoi.h>
#include <4manhinhcauhoi.h>
#include <common.h>

namespace Ui {
class ManHinhDangNhap;
}

class ManHinhDangNhap : public QWidget
{
    Q_OBJECT

public:
    explicit ManHinhDangNhap(QWidget *parent = nullptr);
    ~ManHinhDangNhap();

private slots:
    void on_pb_start_clicked();

    void on_pb_danhSach_clicked();

private:
    Ui::ManHinhDangNhap *ui;
    common c;
    DanhSachNguoiChoi *f3 = new DanhSachNguoiChoi();
    ManHinhCauHoi *f4 = new ManHinhCauHoi();
};

#endif // MANHINHDANGNHAP_H
