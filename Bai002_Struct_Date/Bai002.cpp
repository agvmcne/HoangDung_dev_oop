//cong so x ngay
#include <iostream>
using namespace std;

struct Date
{
    int day;
    int month;
    int year;
};

bool LaNamNhuan (int nam){
    if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        return true;
    } else return false;
}

int SoNgayTrongThang(Date today) {
    switch (today.month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        return 31;
        case 4: case 6: case 9: case 11:
        return 30;
        case 2:
            if(LaNamNhuan(today.year)) {
                return 29;
            } else return 28;
        default: 
            return 0;
    }
}

Date XNgaySauLa (Date hientai,int x) {
    Date XNgaySau = hientai;

    for (int i = 0; i < x; i++) {
        XNgaySau.day++;
        if (XNgaySau.day > SoNgayTrongThang(XNgaySau)) {
            XNgaySau.day = 1;
            XNgaySau.month++;
            if (XNgaySau.month > 12) {
                XNgaySau.month = 1;
                XNgaySau.year++;
            }
        }
    }
    return XNgaySau;
}

int main(){
    Date today;
    int x = 0;

    cout << "Nhap ngay (dd mm yyyy): " << endl;
    cin >> today.day >> today.month >> today.year;

    if (today.month < 1 || today.month > 12 || today.day < 1 || today.day > SoNgayTrongThang(today)) {
        cout << "Ngay khong hop le" << endl;
        return 1;
    }

    cout << "Nhap X ngay tiep theo: " << endl;
    cin >> x;

    Date current = XNgaySauLa(today, x);

    cout << x << " ngay tiep theo la ngay: " << current.day << "/" << current.month << "/" << current.year;

    return 0;
}