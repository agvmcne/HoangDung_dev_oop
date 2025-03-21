#include "Diem.h"
#include "TuGiac.h"
#include "HinhVuong.h"
#include "HinhChuNhat.h"
#include "HinhBinhHanh.h"
#include "HinhThang.h"

int main()
{
	cout << "1. Hinh Thang" << endl;
	cout << "2. Hinh Chu Nhat" << endl;
	cout << "3. Hinh Binh Hanh" << endl;
	cout << "4. Hinh Vuong" << endl;
	cout << "Chon hinh can nhap (1-4): ";
	int chon;
	cin >> chon;
	switch (chon)
	{
	case 1:
	{
		HinhThang hinhThang;
		hinhThang.Nhap();
		hinhThang.Xuat();
		break;
	}
	case 2:
	{
		HinhChuNhat hinhChuNhat;
		hinhChuNhat.Nhap();
		hinhChuNhat.Xuat();
		break;
	}
	case 3:
	{
		HinhBinhHanh hinhBinhHanh;
		hinhBinhHanh.Nhap();
		hinhBinhHanh.Xuat();
		break;
	}
	case 4:
	{
		HinhVuong hinhVuong;
		hinhVuong.Nhap();
		hinhVuong.Xuat();
		break;
	}
	default:
		cout << "Chon khong hop le!" << endl;
		break;
	}
	return 0;
}