#pragma once
#include "Diem.h"

class elip : public Diem
{
protected:
	Diem i;
	float rrong;
	float rdai;
public:
	elip();
	~elip();
	void Nhap();
	void Xuat();
};

