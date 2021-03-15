#ifndef MANHINHCAUHOI_H
#define MANHINHCAUHOI_H

#include <QWidget>

namespace Ui {
class ManHinhCauHoi;
}

class ManHinhCauHoi : public QWidget
{
    Q_OBJECT

public:
    explicit ManHinhCauHoi(QWidget *parent = nullptr);
    ~ManHinhCauHoi();

private:
    Ui::ManHinhCauHoi *ui;
};

#endif // MANHINHCAUHOI_H
