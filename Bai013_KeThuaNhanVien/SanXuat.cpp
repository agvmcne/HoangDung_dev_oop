#include "SanXuat.h"
#include "NhanVien.h"

SanXuat::SanXuat()
{
}

SanXuat::~SanXuat()
{
}

void SanXuat::Nhap()
{
	NhanVien::Nhap();
	cout << "Nhap luong co ban: ";
	cin >> luongcb;
	cout << "Nhap so san pham: ";
	cin >> sosp;
}

void SanXuat::Xuat()
{
	cout << "Thong tin nhan vien san xuat: " << endl;
	NhanVien::Xuat();
	cout << "Luong co ban: " << luongcb << endl;
	cout << "So san pham: " << sosp << endl;
	int luong = luongcb + sosp * 20000;
	cout << "Luong: " << luong << endl;
}
