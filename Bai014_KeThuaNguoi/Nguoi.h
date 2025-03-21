#pragma once
#include <iostream>
#include <string>

using namespace std;

class Nguoi {
protected:
    string hoten;
    int tuoi;

public:
    Nguoi();
	~Nguoi();
    void Nhap();
    void Xuat();
};
