#pragma once
#include "Nguoi.h"

class CaSi : public Nguoi {
private:
    string theLoaiNhac;

public:
    CaSi();
	~CaSi();
    void Nhap();
    void Xuat();
};
