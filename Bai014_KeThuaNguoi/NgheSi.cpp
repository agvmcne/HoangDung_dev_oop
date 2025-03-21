#include "NgheSi.h"

NgheSi::NgheSi()
{
}

NgheSi::~NgheSi()
{
}

void NgheSi::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap loai hinh nghe thuat: ";
    getline(cin, loaiHinh);
}

void NgheSi::Xuat() {
    Nguoi::Xuat();
    cout << "Loai hinh nghe thuat: " << loaiHinh << endl;
}
