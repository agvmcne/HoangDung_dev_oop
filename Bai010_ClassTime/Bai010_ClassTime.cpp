#include "ThoiGian.h"

int main() {
    ThoiGian tg;

    cout << "Nhap thoi gian hien tai: " << endl;
    tg.Nhap();

    int x, y, z;
    cout << "Nhap thoi gian can cong (X gio : Y phut : Z giay): ";
    cin >> x >> y >> z;

    tg.CongThoiGian(x, y, z);

    cout << "Thoi gian sau khi cong la: ";
    tg.Xuat();

    return 0;
}
