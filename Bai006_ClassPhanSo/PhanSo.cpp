#include "PhanSo.h"

int main() {
    PhanSo ps1, ps2;

    cout << "Nhap phan so thu nhat:" << endl;
    ps1.Nhap();

    cout << "Nhap phan so thu hai:" << endl;
    ps2.Nhap();

    cout << endl << "Phan so thu nhat: ";
    ps1.Xuat();

    cout << "Phan so thu hai: ";
    ps2.Xuat();

    cout << endl << "Tong hai phan so: ";
    ps1.Tong(ps2).Xuat();

    cout << "Hieu hai phan so: ";
    ps1.Hieu(ps2).Xuat();

    cout << "Tich hai phan so: ";
    ps1.Tich(ps2).Xuat();

    cout << "Thuong hai phan so: ";
    ps1.Thuong(ps2).Xuat();

    cout << endl << "Gia tri thuc cua phan so thu nhat: " << ps1.DinhGiaTri() << endl;
    cout << "Gia tri thuc cua phan so thu hai: " << ps2.DinhGiaTri() << endl;

    system("pause");
    return 0;
}
