#ifndef DATE_H
#define DATE_H

#include <iostream>
using namespace std;

class Date {
private:
    int ngay, thang, nam;

public:
    Date();
    Date(int ngay, int thang, int nam);

    void Nhap();
    void Xuat();

    bool LaNamNhuan();
    int SoNgayTrongThang();
    void CongNgay(int x);
};

#endif
