#include "CongNhan.h"

CongNhan::CongNhan() 
{
}

CongNhan::~CongNhan()
{
}

void CongNhan::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap bac cong nhan: ";
    cin >> bac;
    cin.ignore();
}

void CongNhan::Xuat() {
    Nguoi::Xuat();
    cout << "Bac cong nhan: " << bac << endl;
}
