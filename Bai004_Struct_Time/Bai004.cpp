#include <iostream>
using namespace std;

struct Time {
    int gio;
    int phut;
    int giay;
};

void nhap (Time &tg) {
    cin >> tg.gio >> tg.phut >> tg.giay;
}

void xuat (Time tg) {
    cout << tg.gio << ":" << ((tg.phut < 10) ? "0" : "") << tg.phut << ":" << ((tg.giay < 10) ? "0" : "") << tg.giay << endl; 
}

Time congthoigian(Time tg, int X, int Y, int Z) {
    Time saukhicong;
    saukhicong.giay = tg.giay + Z;
    saukhicong.phut = tg.phut + Y + saukhicong.giay / 60;
    saukhicong.gio = tg.gio + X + saukhicong.phut / 60;
    saukhicong.giay %= 60;
    saukhicong.phut %= 60;
    saukhicong.gio %= 24;
    
    return saukhicong;
}


int main (){
    Time ThoiGian;
    cout << "Nhap thoi gian hien tai (gio : phut : giay): ";
    nhap(ThoiGian);
    
    int x, y, z;
    cout << "Nhap thoi gian can cong (X gio : Y phut : Z giay)";
    cin >> x >> y >> z;

    Time ThoiGianCanTim = congthoigian(ThoiGian, x, y, z);
    cout << "Thoi gian sau khi cong la: " << endl;
    xuat(ThoiGianCanTim);

    return 0;
}