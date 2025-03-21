#pragma once
#include <iostream>
#include <string>
using namespace std;

class NhanVien
{
protected:
	string hoten;
	string ngaysinh;
	int luong;
public:
	NhanVien();
	~NhanVien();
	void Nhap();
	void Xuat();
};

