#include "TuGiac.h"

TuGiac::TuGiac()
{
}

TuGiac::~TuGiac()
{
}

void TuGiac::Nhap()
{
    cout << "Nhap diem thu nhat:" << endl;
    d1.Nhap();
    cout << "Nhap diem thu hai:" << endl;
    d2.Nhap();
    cout << "Nhap diem thu ba:" << endl; 
    d3.Nhap();
    cout << "Nhap diem thu tu:" << endl;
    d4.Nhap();
}

void TuGiac::Xuat()
{
    cout << "Toa do cac dinh: ";
    d1.Xuat(); cout << " ";
    d2.Xuat(); cout << " ";
    d3.Xuat(); cout << " ";
    d4.Xuat(); cout << endl;
}

