#include "SoPhuc.h"

int main() {
    SoPhuc sp1, sp2;

    cout << "Nhap so phuc thu nhat: " << endl;
    sp1.Nhap();

    cout << "Nhap so phuc thu hai: " << endl;
    sp2.Nhap();

    cout << endl << "So phuc thu nhat: ";
    sp1.Xuat();

    cout << "So phuc thu hai: ";
    sp2.Xuat();

    SoPhuc tong = sp1.Tong(sp2);
    SoPhuc hieu = sp1.Hieu(sp2);
    SoPhuc tich = sp1.Tich(sp2);
    SoPhuc thuong = sp1.Thuong(sp2);

    cout << endl << "Tong hai so phuc: ";
    tong.Xuat();

    cout << "Hieu hai so phuc: ";
    hieu.Xuat();

    cout << "Tich hai so phuc: ";
    tich.Xuat();

    cout << "Thuong hai so phuc: ";
    thuong.Xuat();

    return 0;
}
