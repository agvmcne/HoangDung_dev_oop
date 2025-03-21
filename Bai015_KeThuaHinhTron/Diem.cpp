#include "Diem.h"

void Diem::Nhap()
{
	cout << "Nhap toa do ";
	cin >> x >> y;
}

void Diem::Xuat()
{
	cout << "(" << x << ", " << y << ")" << endl;
}

void Diem::setX(int xx)
{
	x = xx;
}

void Diem::setY(int yy)
{
	y = yy;
}

int Diem::getX()
{
	return x;
}

int Diem::getY()
{
	return y;
}