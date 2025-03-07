#ifndef DIEM_H
#define DIEM_H

#include <iostream>
#include <cmath>

using namespace std;

class Diem {
private:
    float x, y;

public:
    Diem();
    Diem(float x, float y);
    void Nhap();
    void Xuat();
    Diem DiChuyen(Diem d);
    float TinhKhoangCach(Diem d);
};

#endif
