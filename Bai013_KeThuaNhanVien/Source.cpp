#include "NhanVien.h"
#include "VanPhong.h"
#include "SanXuat.h"
#include <iostream>
using namespace std;

int main()
{
	SanXuat sx;
	cout << "Nhap thong tin nhan vien san xuat: " << endl;
	sx.Nhap();
	sx.Xuat();

	cout << endl;

	VanPhong vp;
	cout << "Nhap thong tin nhan vien van phong: " << endl;
	vp.Nhap();
	vp.Xuat();

	return 0;
}