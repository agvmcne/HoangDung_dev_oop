#ifndef THOIGIAN_H
#define THOIGIAN_H

#include <iostream>
using namespace std;

class ThoiGian {
private:
    int gio, phut, giay;

public:
    ThoiGian();
    ThoiGian(int gio, int phut, int giay);

    void Nhap();
    void Xuat();
    void CongThoiGian(int X, int Y, int Z);
};

#endif
