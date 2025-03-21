#pragma once
#include <iostream>
using namespace std;

class Diem
{
private:
	float x;
	float y;
public:
	Diem() { x = 0; y = 0; }
	Diem(int xx, int yy) { x = xx; y = yy; }
	~Diem()
	{
		cout << "Huy bo doi tuong";
	}
	void Nhap();
	void Xuat();
	void setX(int xx);
	void setY(int xx);
	int getX();
	int getY();

};