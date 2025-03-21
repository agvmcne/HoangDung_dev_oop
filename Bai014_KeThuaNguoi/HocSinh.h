#pragma once
#include "Nguoi.h"

class HocSinh : public Nguoi {
private:
    string lop;
    string truong;

public:
	HocSinh();
	~HocSinh();
    void Nhap();
    void Xuat();
};
