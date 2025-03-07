#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>

using namespace std;

class PhanSo {
private:
    int tuSo;
    int mauSo;

public:
    PhanSo();
    PhanSo(int tu, int mau);

    void Nhap();
    void Xuat();

    PhanSo Tong(PhanSo ps);
    PhanSo Hieu(PhanSo ps);
    PhanSo Tich(PhanSo ps);
    PhanSo Thuong(PhanSo ps);

    int TimUCLN(int a, int b);
    PhanSo RutGonPhanSo();
    float DinhGiaTri();
};

#endif
