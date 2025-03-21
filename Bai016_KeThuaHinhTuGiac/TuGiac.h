#pragma once
#include "Diem.h"

class TuGiac : public Diem
{
protected:
	Diem d1, d2, d3, d4;
public:
	TuGiac();
	~TuGiac();
	void Nhap();
	void Xuat();
};

