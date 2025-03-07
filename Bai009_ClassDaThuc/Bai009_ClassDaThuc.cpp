#include "DaThucBac2.h"
#include "DaThucBac4.h"

int main() {
    DaThucBac2 dt1, dt2;

    cout << "Nhap da thuc thu 1: " << endl;
    dt1.Nhap();

    cout << "Nhap da thuc thu 2: " << endl;
    dt2.Nhap();

    cout << endl << "Da thuc thu nhat: ";
    dt1.Xuat();

    cout << "Da thuc thu 2: ";
    dt2.Xuat();

    DaThucBac2 tong = dt1.Tong(dt2);
    DaThucBac2 hieu = dt1.Hieu(dt2);
    DaThucBac4 tich = dt1.Tich(dt2);

    cout << endl << "Tong 2 da thuc: ";
    tong.Xuat();

    cout << "Hieu 2 da thuc: ";
    hieu.Xuat();

    cout << "Tich 2 da thuc: ";
    tich.Xuat();

    int x;
    cout << endl << "Nhap gia tri x de tinh f(x): ";
    cin >> x;

    cout << "Gia tri da thuc thu 1 tai x = " << x << ": " << dt1.GiaTri(x) << endl;
    cout << "Gia tri da thuc thu 2 tai x = " << x << ": " << dt2.GiaTri(x) << endl;

    return 0;
}
