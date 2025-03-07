#include "Date.h"

int main() {
    Date ngayHienTai;
    int soNgay;

    cout << "Nhap ngay hien tai:" << endl;
    ngayHienTai.Nhap();

    if (ngayHienTai.SoNgayTrongThang() == 0 || ngayHienTai.SoNgayTrongThang() < ngayHienTai.SoNgayTrongThang()) {
        cout << "Ngay khong hop le" << endl;
        return 1;
    }

    cout << "Nhap so ngay can cong: ";
    cin >> soNgay;

    cout << endl << "Ngay hien tai: ";
    ngayHienTai.Xuat();

    ngayHienTai.CongNgay(soNgay);

    cout << endl << "Ngay moi sau khi cong " << soNgay << " ngay: ";
    ngayHienTai.Xuat();

    return 0;
}
