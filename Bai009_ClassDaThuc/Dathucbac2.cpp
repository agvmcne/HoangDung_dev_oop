#include "DaThucBac2.h"
#include "DaThucBac4.h"

DaThucBac2::DaThucBac2() {
    a = 0; b = 0; c = 0;
}

DaThucBac2::DaThucBac2(int a, int b, int c) {
    this->a = a;
    this->b = b;
    this->c = c;
}

void DaThucBac2::Nhap() {
    cout << "Nhap he so a: ";
    cin >> a;
    cout << "Nhap he so b: ";
    cin >> b;
    cout << "Nhap he so c: ";
    cin >> c;
}

void DaThucBac2::Xuat() {
    cout << a << "x^2 ";
    if (b >= 0) cout << "+ " << b << "x ";
    else cout << "- " << -b << "x ";

    if (c >= 0) cout << "+ " << c;
    else cout << "- " << -c;

    cout << endl;
}

DaThucBac2 DaThucBac2::Tong(const DaThucBac2& dt) {
    return DaThucBac2(a + dt.a, b + dt.b, c + dt.c);
}

DaThucBac2 DaThucBac2::Hieu(const DaThucBac2& dt) {
    return DaThucBac2(a - dt.a, b - dt.b, c - dt.c);
}

DaThucBac4 DaThucBac2::Tich(const DaThucBac2& dt) {
    int a4 = a * dt.a;
    int b3 = a * dt.b + b * dt.a;
    int c2 = a * dt.c + b * dt.b + c * dt.a;
    int d1 = b * dt.c + c * dt.b;
    int e0 = c * dt.c;

    return DaThucBac4(a4, b3, c2, d1, e0);
}

int DaThucBac2::GiaTri(int x) {
    return a * x * x + b * x + c;
}
