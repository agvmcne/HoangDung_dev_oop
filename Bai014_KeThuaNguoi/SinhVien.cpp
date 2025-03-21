#include "SinhVien.h"

SinhVien::SinhVien()
{
}

SinhVien::~SinhVien()
{
}

void SinhVien::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap ma sinh vien: ";
    getline(cin, maSV);
    cout << "Nhap nganh hoc: ";
    getline(cin, nganhHoc);
}

void SinhVien::Xuat() {
    Nguoi::Xuat();
    cout << "Ma sinh vien: " << maSV << endl;
    cout << "Nganh hoc: " << nganhHoc << endl;
}
