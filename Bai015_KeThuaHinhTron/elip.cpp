#include "elip.h"

elip::elip()
{
}

elip::~elip()
{
}

void elip::Nhap()
{
	cout << "Nhap tam: " << endl;
	i.Nhap();
	cout << "Nhap ban kinh rong: ";
	cin >> rrong;
	cout << "Nhap ban kinh dai: ";
	cin >> rdai;
}

void elip::Xuat()
{
	cout << "Tam: ";
	i.Xuat();
	cout << "Ban kinh rong: " << rrong << endl;
	cout << "Ban kinh dai: " << rdai << endl;
}