#include "DaThucBac4.h"

DaThucBac4::DaThucBac4() {
    a = 0; b = 0; c = 0; d = 0; e = 0;
}

DaThucBac4::DaThucBac4(int a, int b, int c, int d, int e) {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->e = e;
}

void DaThucBac4::Xuat() {
    cout << a << "x^4 ";
    if (b >= 0) cout << "+ " << b << "x^3 ";
    else cout << "- " << -b << "x^3 ";

    if (c >= 0) cout << "+ " << c << "x^2 ";
    else cout << "- " << -c << "x^2 ";

    if (d >= 0) cout << "+ " << d << "x ";
    else cout << "- " << -d << "x ";

    if (e >= 0) cout << "+ " << e;
    else cout << "- " << -e;

    cout << endl;
}
