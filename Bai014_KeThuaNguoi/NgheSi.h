#pragma once
#include "Nguoi.h"

class NgheSi : public Nguoi {
private:
    string loaiHinh;

public:
	NgheSi();
	~NgheSi();
    void Nhap();
    void Xuat();
};
