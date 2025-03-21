#include "VanPhong.h"

VanPhong::VanPhong()
{
}

VanPhong::~VanPhong()
{
}

void VanPhong::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap so ngay lam viec: ";
	cin >> songay;
}

void VanPhong::Xuat()
{
	cout << "Thong tin nhan vien van phong: " << endl;
	NhanVien::Xuat();
	cout << "So ngay lam viec: " << songay << endl;
	long long luong = songay * 100000;
	cout << "Luong: " << luong << endl;
}