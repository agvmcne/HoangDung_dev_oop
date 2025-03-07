#include "ThoiGian.h"

ThoiGian::ThoiGian() {
    gio = 0;
    phut = 0;
    giay = 0;
}

ThoiGian::ThoiGian(int gio, int phut, int giay) {
    this->gio = gio;
    this->phut = phut;
    this->giay = giay;
}

void ThoiGian::Nhap() {
    cout << "Nhap thoi gian hien tai (gio : phut : giay): ";
    cin >> gio >> phut >> giay;
}

void ThoiGian::Xuat() {
    cout << (gio < 10 ? "0" : "") << gio << ":"
        << (phut < 10 ? "0" : "") << phut << ":"
        << (giay < 10 ? "0" : "") << giay << endl;
}

void ThoiGian::CongThoiGian(int X, int Y, int Z) {
    giay += Z;
    phut += Y + giay / 60;
    gio += X + phut / 60;
    giay %= 60;
    phut %= 60;
    gio %= 24;
}
