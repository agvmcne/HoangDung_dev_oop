#include "Point.h"

Diem::Diem() {
    x = 0;
    y = 0;
}

Diem::Diem(float xx, float yy) {
    x = xx;
    y = yy;
}

void Diem::Nhap() {
    cout << "Nhap toa do x: ";
    cin >> x;
    cout << "Nhap toa do y: ";
    cin >> y;
}

void Diem::Xuat() {
    cout << "(" << x << ", " << y << ")" << endl;
}

Diem Diem::DiChuyen(Diem d) {
    return Diem(x + d.x, y + d.y);
}

float Diem::TinhKhoangCach(Diem d) {
    return sqrt(pow(d.x - x, 2) + pow(d.y - y, 2));
}
