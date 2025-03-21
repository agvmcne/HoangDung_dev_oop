#include "HocSinh.h"

HocSinh::HocSinh() 
{
}

HocSinh::~HocSinh()
{
}

void HocSinh::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap lop: ";
    getline(cin, lop);
    cout << "Nhap truong: ";
    getline(cin, truong);
}

void HocSinh::Xuat() {
    Nguoi::Xuat();
    cout << "Lop: " << lop << endl;
    cout << "Truong: " << truong << endl;
}
