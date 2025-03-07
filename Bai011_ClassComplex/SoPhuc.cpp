#include "SoPhuc.h"

SoPhuc::SoPhuc() {
    thuc = 0;
    ao = 0;
}

SoPhuc::SoPhuc(float thuc, float ao) {
    this->thuc = thuc;
    this->ao = ao;
}

void SoPhuc::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> thuc;
    cout << "Nhap phan ao: ";
    cin >> ao;
}

void SoPhuc::Xuat(){
    cout << thuc;
    if (ao >= 0) cout << " + " << ao << "i" << endl;
    else cout << " - " << -ao << "i" << endl;
}

SoPhuc SoPhuc::Tong(const SoPhuc& sp) {
    return SoPhuc(thuc + sp.thuc, ao + sp.ao);
}

SoPhuc SoPhuc::Hieu(const SoPhuc& sp) {
    return SoPhuc(thuc - sp.thuc, ao - sp.ao);
}

SoPhuc SoPhuc::Tich(const SoPhuc& sp) {
    float thucMoi = thuc * sp.thuc - ao * sp.ao;
    float aoMoi = thuc * sp.ao + ao * sp.thuc;
    return SoPhuc(thucMoi, aoMoi);
}

SoPhuc SoPhuc::Thuong(const SoPhuc& sp) {
    float mau = sp.thuc * sp.thuc + sp.ao * sp.ao;
    float thucMoi = (thuc * sp.thuc + ao * sp.ao) / mau;
    float aoMoi = (ao * sp.thuc - thuc * sp.ao) / mau;
    return SoPhuc(thucMoi, aoMoi);
}
