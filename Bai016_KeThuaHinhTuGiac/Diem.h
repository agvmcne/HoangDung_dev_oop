#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	int x, y;
public:
	Diem();
	Diem(int xx, int yy) { x = xx; y = yy; }
	~Diem();
	void Nhap();
	void Xuat();
	void setX(int xx);
	void setY(int yy);
	int getX();
	int getY();
};

