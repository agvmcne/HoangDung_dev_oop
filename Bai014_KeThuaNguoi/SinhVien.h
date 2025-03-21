#pragma once
#include "Nguoi.h"

class SinhVien : public Nguoi {
private:
    string maSV;
    string nganhHoc;

public:
	SinhVien();
	~SinhVien();
    void Nhap();
    void Xuat();
};
