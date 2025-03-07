#include "Point.h"

int main() {
    Diem d1, d2;

    cout << "Nhap diem thu nhat:" << endl;
    d1.Nhap();

    cout << "Nhap diem thu hai:" << endl;
    d2.Nhap();

    cout << endl << "Diem thu nhat: ";
    d1.Xuat();

    cout << "Diem thu hai: ";
    d2.Xuat();

    Diem d3 = d1.DiChuyen(d2);
    cout << endl << "Diem moi sau khi di chuyen: ";
    d3.Xuat();

    cout << endl << "Khoang cach giua hai diem: " << d1.TinhKhoangCach(d2) << endl;

    return 0;
}
