#include "Diem.h"

Diem::Diem()
{
	x = 0;
	y = 0;
}

Diem::~Diem()
{
}

void Diem::Nhap()
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
}

void Diem::Xuat()
{
	cout << "(" << x << ", " << y << ")";
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
