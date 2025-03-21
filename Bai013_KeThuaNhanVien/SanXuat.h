#pragma once
#include "NhanVien.h"
#include <iostream>

class SanXuat : public NhanVien
{
protected:
	int luongcb;
	int sosp;
public:
	SanXuat();
	~SanXuat();
	void Nhap();
	void Xuat();
};

