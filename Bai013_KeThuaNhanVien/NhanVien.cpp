#include "NhanVien.h"

NhanVien::NhanVien()
{
}

NhanVien::~NhanVien()
{
}

void NhanVien::Nhap()
{
	cout << "Nhap ho ten: ";
	getline(cin, hoten);
	cout << "Nhap ngay sinh (dd/mm/yyyy): ";
	getline(cin, ngaysinh);
}

void NhanVien::Xuat()
{
	cin.ignore();
	cout << "Ho ten: " << hoten << endl;
	cout << "Ngay sinh: " << ngaysinh << endl;
}
