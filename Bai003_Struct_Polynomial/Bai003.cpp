//Xây dựng struct đa thức bậc 2, tính tổng, hiệu, tích của hai đa thức (có hàm nhập xuất), Tính giá trị của đa thức F(0) 
#include <iostream>
using namespace std;

struct DaThucBacHai // f(x) = ax^2 + bx + c
{
    int a;
    int b;
    int c;

};

struct DaThucBacBon // f(x) = ax^4 + bx^3 + cx^2 + dx + e
{
    int a;
    int b;
    int c;
    int d;
    int e;
};


void nhap(DaThucBacHai &fx) {
    cout << "Nhap so a: ";
    cin >> fx.a;
    cout << "Nhap so b: ";
    cin >> fx.b;
    cout << "Nhap so c: ";
    cin >> fx.c;
}

void xuatbachai(DaThucBacHai fx) {
    if (fx.a > 0) {
        cout << fx.a << "x^2";
    } else if (fx.a < 0) {
        cout << "- " << -fx.a << "x^2";
    }
    
    if (fx.b > 0) {
        cout << " + " << fx.b << "x";
    } else if (fx.b < 0) {
        cout << " - " << -fx.b << "x";
    }

    if (fx.c > 0) {
        cout << " + " << fx.c;
    } else if (fx.c < 0) {
        cout << " - " << -fx.c;
    }
    cout << endl;
}

void xuatbacbon(DaThucBacBon gx) {
    if (gx.a > 0) {
        cout << gx.a << "x^4 ";
    } else if(gx.a < 0) {
        cout << "- " << -gx.a << "x^4 ";
    }

    if (gx.b > 0) {
        cout << " + " << gx.b << "x^3";
    } else if (gx.b < 0) {
        cout << " - " << -gx.b << "x^3";
    }

    if (gx.c > 0) {
        cout << " + " << gx.c << "x^2";
    } else if (gx.c < 0) {
        cout << " - " << -gx.c << "x^2";
    }

    if (gx.d > 0) {
        cout << " + " << gx.d << "x";
    } else if (gx.d < 0) {
        cout << " - " << -gx.d << "x";
    }

    if (gx.e > 0) {
        cout << " + " << gx.e;
    } else if (gx.e < 0) {
        cout << " - " << -gx.e;
    }

    cout << endl;
}

DaThucBacHai tong(DaThucBacHai fx1, DaThucBacHai fx2) {
    DaThucBacHai TongDaThuc;
    TongDaThuc.a = fx1.a + fx2.a;
    TongDaThuc.b = fx1.b + fx2.b;
    TongDaThuc.c = fx1.c + fx2.c;
    return TongDaThuc;
}

DaThucBacHai hieu(DaThucBacHai fx1, DaThucBacHai fx2) {
    DaThucBacHai HieuDaThuc;
    HieuDaThuc.a = fx1.a - fx2.a;
    HieuDaThuc.b = fx1.b - fx2.b;
    HieuDaThuc.c = fx1.c - fx2.c;
    return HieuDaThuc;
}

DaThucBacBon tich(DaThucBacHai fx1, DaThucBacHai fx2) {
    DaThucBacBon TichDaThuc;
    TichDaThuc.a = fx1.a * fx2.a;
    TichDaThuc.b = fx1.a * fx2.b + fx1.b * fx2.a;
    TichDaThuc.c = fx1.a * fx2.c + fx1.b * fx2.b + fx1.c * fx2.a;
    TichDaThuc.d = fx1.b * fx2.c + fx1.c * fx2.b;
    TichDaThuc.e = fx1.c * fx2.c;
    return TichDaThuc;
}

int giaTriDaThuc(DaThucBacHai fx, int x) {
    return fx.a * x * x + fx.b * x + fx.c;
}

int main(){
    DaThucBacHai fx1, fx2;
    cout << "Da thuc bac 2 co dang: f(x) = ax^2 + bx + c" << endl;
    cout << "Nhap da thuc thu 1" << endl;
    nhap(fx1);
    cout << "Nhap da thuc thu 2" << endl;
    nhap(fx2);

    DaThucBacHai Tong = tong(fx1, fx2);
    DaThucBacHai Hieu = hieu(fx1, fx2);
    DaThucBacBon Tich = tich(fx1, fx2);

    cout << "Tong 2 da thuc la: ";
    xuatbachai(Tong);
    cout << "Hieu 2 da thuc la: ";
    xuatbachai(Hieu);
    cout << "Tich 2 da thuc la: ";
    xuatbacbon(Tich);

    int x;
    cout << "Nhap gia tri x de tinh f(x): ";
    cin >> x;
    cout << "Gia tri da thuc thu 1 tai x = " << x << ": " << giaTriDaThuc(fx1, x) << endl;
    cout << "Gia tri da thuc thu 2 tai x = " << x << ": " << giaTriDaThuc(fx2, x) << endl;
    return 0;
}