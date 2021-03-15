#ifndef QUYENTROGIUP_H
#define QUYENTROGIUP_H

#include <QWidget>

namespace Ui {
class QuyenTroGiup;
}

class QuyenTroGiup : public QWidget
{
    Q_OBJECT

public:
    explicit QuyenTroGiup(QWidget *parent = nullptr);
    ~QuyenTroGiup();

private:
    Ui::QuyenTroGiup *ui;
};

#endif // 5QUYENTROGIUP_H
