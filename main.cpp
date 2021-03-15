#include "mainwindow.h"
#include "2manhinhdangnhap.h"
#include "3danhsachnguoichoi.h"
#include "4manhinhcauhoi.h"
#include "5quyentrogiup.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
        MainWindow w;
        w.show();
    return a.exec();
}
