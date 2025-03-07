#ifndef DATHUCBACHAI_H
#define DATHUCBACHAI_H

#include <iostream>
using namespace std;

class DaThucBac4;

class DaThucBac2 {
private:
    int a, b, c;

public:
    DaThucBac2();
    DaThucBac2(int a, int b, int c);

    void Nhap();
    void Xuat();

    DaThucBac2 Tong(const DaThucBac2& dt);
    DaThucBac2 Hieu(const DaThucBac2& dt);
    DaThucBac4 Tich(const DaThucBac2& dt);

    int GiaTri(int x);
};

#endif
