#include "Nguoi.h"

Nguoi::Nguoi() 
{
}

Nguoi::~Nguoi()
{
}

void Nguoi::Nhap() 
{
	cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, hoten);
    cout << "Nhap tuoi: ";
    cin >> tuoi;
	cin.ignore();
}

void Nguoi::Xuat() 
{
    cout << "Ho ten: " << hoten << endl;
    cout << "Tuoi: " << tuoi << endl;
}
