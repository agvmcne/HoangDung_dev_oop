#pragma once
#include "NhanVien.h"

class VanPhong : public NhanVien
{
protected: 
	int songay;
public:
	VanPhong();
	~VanPhong();
	void Nhap();
	void Xuat();
};

