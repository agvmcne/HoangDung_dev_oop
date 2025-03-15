#include "giasuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

int main()
{
	int TongBo = 0;
	int LitSuaBo = 0;
	int TongCuu = 0;
	int LitSuaCuu = 0;
	int TongDe = 0;
	int LitSuaDe = 0;

	int sobo;
	int socuu;
	int sode;

	cout << "Nhap so bo: ";
	cin >> sobo;

	Bo* bo = new Bo[sobo];

	for (int i = 0; i < sobo; i++)
	{
		TongBo += bo[i].sinhcon();
		LitSuaBo += bo[i].sua();
	}

	cout << "Nhap so cuu: ";
	cin >> socuu;

	Cuu* cuu = new Cuu[socuu];

	for (int i = 0; i < socuu; i++)
	{
		TongCuu += cuu[i].sinhcon();
		LitSuaCuu += cuu[i].sua();
	}

	cout << "Nhap so de: ";
	cin >> sode;

	De* de = new De[sode];

	for (int i = 0; i < sode; i++)
	{
		TongDe += de[i].sinhcon();
		LitSuaDe += de[i].sua();
	}

	cout << "Tong so bo: " << TongBo << endl;
	cout << "Tong so lit sua bo: " << LitSuaBo << endl;
	cout << "Tong so cuu: " << TongCuu << endl;
	cout << "Tong so lit sua cuu: " << LitSuaCuu << endl;
	cout << "Tong so de: " << TongDe << endl;
	cout << "Tong so lit sua de: " << LitSuaDe << endl;

	delete[] bo;
	delete[] cuu;
	delete[] de;

	return 0;
}