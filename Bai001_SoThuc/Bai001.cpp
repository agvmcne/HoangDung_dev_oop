#include <iostream>
using namespace std;

double cong(double a, double b) {
    return a + b;
}

double tru(double a, double b) {
    return a - b;
}

double nhan(double a, double b) {
    return a * b;
}

double chia(double a, double b) {
    if (b == 0) {
        return 0;
    }
    return a / b;
}

int main() {
    double so1, so2;
    cout << "Nhap so thuc thu nhat: ";
    cin >> so1;
    cout << "Nhap so thuc thu hai: ";
    cin >> so2;

    cout << "Phep Cong: " << so1 << " + " << so2 << " = " << cong(so1, so2) << endl;
    cout << "Phep Tru: " << so1 << " - " << so2 << " = " << tru(so1, so2) << endl;
    cout << "Phep Nhan: " << so1 << " * " << so2 << " = " << nhan(so1, so2) << endl;
    
    cout << "Phep Chia: ";
    if (so2 == 0) {
        cout << "Loi. Khong the chia cho 0." << endl;
        return 0;
    } else cout << so1 << " / " << so2 << " = " << chia(so1, so2) << endl;

    return 0;
}