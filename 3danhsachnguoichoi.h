#ifndef DANHSACHNGUOICHOI_H
#define DANHSACHNGUOICHOI_H

#include <QWidget>

namespace Ui {
class DanhSachNguoiChoi;
}

class DanhSachNguoiChoi : public QWidget
{
    Q_OBJECT

public:
    explicit DanhSachNguoiChoi(QWidget *parent = nullptr);
    ~DanhSachNguoiChoi();

private:
    Ui::DanhSachNguoiChoi *ui;
};

#endif // DANHSACHNGUOICHOI_H
