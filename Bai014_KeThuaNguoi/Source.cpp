#include "Nguoi.h"
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "CaSi.h"
#include "NgheSi.h"
#include <iostream>
using namespace std;
int main()
{
	int n;
	int m;
	cout << " Ban muon nhap thong tin cua " << endl;
	cout << " 1. Sinh vien" << endl;
	cout << " 2. Hoc sinh" << endl;
	cout << " 3. Cong nhan" << endl;
	cout << " 4. Ca si" << endl;
	cout << " 5. Nghe si" << endl;
	cout << endl;
	cout << " Ban chon so may ? " << endl;
	cin >> m;
	cout << " Nhap so luong nguoi: ";
	cin >> n;
	switch (m)
	{
	case 1:
	{
		cout << " Nhap thong tin sinh vien" << endl;
		SinhVien s[30];
		for (int i = 0; i < n; i++)
		{
			s[i].Nhap();
		}
		cout << " Xuat thong tin sinh vien" << endl;;
		for (int i = 0; i < n; i++)
		{
			s[i].Xuat();
		}
		break;
	}
	case 2:
	{
		cout << " Nhap thong tin hoc sinh" << endl;
		HocSinh hs[30];
		for (int i = 0; i < n; i++)
		{
			hs[i].Nhap();
		}
		cout << " Xuat thong tin hoc sinh" << endl;
		for (int i = 0; i < n; i++)
		{
			hs[i].Xuat();
		}
		break;
	}
	case 3:
	{
		cout << " Nhap thong tin cong nhan" << endl;
		CongNhan cn[30];
		for (int i = 0; i < n; i++)
		{
			cn[i].Nhap();
		}
		cout << " Thong tin cong nhan vua nhap la:" << endl;
		for (int i = 0; i < n; i++)
		{
			cn[i].Xuat();
		}
		break;
	}
	case 4:
	{
		cout << " Nhap thong tin ca si" << endl;
		CaSi cs[30];
		for (int i = 0; i < n; i++)
		{
			cs[i].Nhap();
		}
		cout << " Xuat thong tin ca si" << endl;
		for (int i = 0; i < n; i++)
		{
			cs[i].Xuat();
		}
		break;
	}
	case 5:
	{
		{
			cout << " Nhap thong tin nghe si" << endl;
			NgheSi ns[30];
			for (int i = 0; i < n; i++)
			{
				ns[i].Nhap();
			}
			cout << " Xuat thong tin nghe si" << endl;
			for (int i = 0; i < n; i++)
			{
				ns[i].Xuat();
			}
			break;
		}
	}
	}
	system("pause");
	return 0;
}