#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc {
private:
    float thuc, ao;

public:
    SoPhuc();
    SoPhuc(float thuc, float ao);

    void Nhap();
    void Xuat();

    SoPhuc Tong(const SoPhuc& sp);
    SoPhuc Hieu(const SoPhuc& sp);
    SoPhuc Tich(const SoPhuc& sp);
    SoPhuc Thuong(const SoPhuc& sp);
};

#endif
