#include "PhanSo.h"

PhanSo::PhanSo() {
    tuSo = 0;
    mauSo = 1;
}

PhanSo::PhanSo(int tu, int mau) {
    tuSo = tu;
    mauSo = mau;
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> tuSo;
    do {
        cout << "Nhap mau so: ";
        cin >> mauSo;
    } while (mauSo == 0);
}

void PhanSo::Xuat() {
    cout << tuSo << "/" << mauSo << endl;
}

int PhanSo::TimUCLN(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

PhanSo PhanSo::RutGonPhanSo() {
    int ucln = TimUCLN(tuSo, mauSo);
    return PhanSo(tuSo / ucln, mauSo / ucln);
}

PhanSo PhanSo::Tong(PhanSo ps) {
    int tuMoi = tuSo * ps.mauSo + ps.tuSo * mauSo;
    int mauMoi = mauSo * ps.mauSo;
    return PhanSo(tuMoi, mauMoi).RutGonPhanSo();
}

PhanSo PhanSo::Hieu(PhanSo ps) {
    int tuMoi = tuSo * ps.mauSo - ps.tuSo * mauSo;
    int mauMoi = mauSo * ps.mauSo;
    return PhanSo(tuMoi, mauMoi).RutGonPhanSo();
}

PhanSo PhanSo::Tich(PhanSo ps) {
    int tuMoi = tuSo * ps.tuSo;
    int mauMoi = mauSo * ps.mauSo;
    return PhanSo(tuMoi, mauMoi).RutGonPhanSo();
}

PhanSo PhanSo::Thuong(PhanSo ps) {
    int tuMoi = tuSo * ps.mauSo;
    int mauMoi = mauSo * ps.tuSo;
    return PhanSo(tuMoi, mauMoi).RutGonPhanSo();
}

float PhanSo::DinhGiaTri() {
    return float(tuSo) / mauSo;
}
