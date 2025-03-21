#include "CaSi.h"

CaSi::CaSi() 
{
}

CaSi::~CaSi()
{
}

void CaSi::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap the loai nhac: ";
    getline(cin, theLoaiNhac);
}

void CaSi::Xuat() {
    Nguoi::Xuat();
    cout << "The loai nhac: " << theLoaiNhac << endl;
}
