#include "HinhTron.h"

HinhTron::HinhTron()
{
}

HinhTron::~HinhTron()
{
}

void HinhTron::Nhap()
{
	do
	{
		elip::Nhap();
	} while (rdai != rrong);
	r = rrong = rdai;
}

void HinhTron::Xuat()
{
	cout << " Tam hinh tron la ";
	elip::Xuat();
}
