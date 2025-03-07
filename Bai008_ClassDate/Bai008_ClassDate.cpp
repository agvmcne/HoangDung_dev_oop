#include "Date.h"

Date::Date() {
    ngay = 1;
    thang = 1;
    nam = 2000;
}

Date::Date(int ngay, int thang, int nam) {
    this->ngay = ngay;
    this->thang = thang;
    this->nam = nam;
}

void Date::Nhap() {
    cout << "Nhap ngay (dd mm yyyy): ";
    cin >> ngay >> thang >> nam;
}

void Date::Xuat() {
    cout << ngay << "/" << thang << "/" << nam << endl;
}

bool Date::LaNamNhuan() {
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int Date::SoNgayTrongThang() {
    int ngayTrongThang[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (thang == 2 && LaNamNhuan()) {
        return 29;
    }
    return ngayTrongThang[thang - 1];
}

void Date::CongNgay(int x) {
    ngay += x;
    while (ngay > SoNgayTrongThang()) {
        ngay -= SoNgayTrongThang();
        thang++;
        if (thang > 12) {
            thang = 1;
            nam++;
        }
    }
}
