#pragma once
#include "Nguoi.h"

class CongNhan : public Nguoi {
private:
    int bac;

public:
	CongNhan();
	~CongNhan();
    void Nhap();
    void Xuat();
};
