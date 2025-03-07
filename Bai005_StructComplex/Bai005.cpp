//Vi?t ch??ng trình nh?p vào 2 s? ph?c. Tính t?ng, hi?u, tích và xu?t k?t qu?.
#include <iostream>
using namespace std;

struct SoPhuc
{
	float thuc;
	float ao;
};

typedef SoPhuc SOPHUC;
void Nhap(SOPHUC&);
void Xuat(SOPHUC);
SOPHUC Tong(SOPHUC, SOPHUC);
SOPHUC Hieu(SOPHUC, SOPHUC);
SOPHUC Tich(SOPHUC, SOPHUC);
SOPHUC Thuong(SOPHUC, SOPHUC);

int main()
{
	SoPhuc a, b;
	cout << "Nhap so phuc 1:" << endl;
	Nhap(a);
	cout << "Nhap so phuc 2:" << endl;
	Nhap(b);
	Xuat(a);
	Xuat(b);
	cout << "Tong 2 so phuc: ";
	Xuat(Tong(a, b));
	cout << "Hieu 2 so phuc: ";
	Xuat(Hieu(a, b));
	cout << "Tich 2 so phuc: ";
	Xuat(Tich(a, b));
	cout << "Thuong 2 so phuc: ";
	Xuat(Thuong(a, b));
	return 0;
}

void Nhap(SOPHUC& sp)
{
	cout << "Nhap phan thuc: ";
	cin >> sp.thuc;
	cout << "Nhap phan ao: ";
	cin >> sp.ao;
}

void Xuat(SOPHUC sp)
{
	cout << sp.thuc << " + " << sp.ao << "i" << endl;
}

SoPhuc Tong(SOPHUC x, SOPHUC y)
{
	SoPhuc tong;
	tong.thuc = x.thuc + y.thuc;
	tong.ao = x.ao + y.ao;
	return tong;
}

SoPhuc Hieu(SOPHUC x, SOPHUC y)
{
	SoPhuc hieu;
	hieu.thuc = x.thuc - y.thuc;
	hieu.ao = x.ao - y.ao;
	return hieu;
}

SoPhuc Tich(SOPHUC x, SOPHUC y)
{
	SoPhuc tich;
	tich.thuc = x.thuc * y.thuc - x.ao * y.ao;
	tich.ao = x.thuc * y.ao + x.ao * y.thuc;
	return tich;
}

SoPhuc Thuong(SOPHUC x, SOPHUC y)
{
	SoPhuc thuong;
	thuong.thuc = (x.thuc * y.thuc + x.ao * y.ao) / (y.thuc * y.thuc + y.ao * y.ao);
	thuong.ao = (x.ao * y.thuc - x.thuc * y.ao) / (y.thuc * y.thuc + y.ao * y.ao);
	return thuong;
}