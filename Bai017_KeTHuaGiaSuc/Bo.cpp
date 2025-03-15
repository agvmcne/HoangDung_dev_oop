#include "Bo.h"
Bo::Bo()
{
}
Bo::~Bo()
{
}

int Bo::sinhcon()
{

	return rand() % 7;
}

int Bo::sua()
{
	return rand() % 20;
}

void Bo::keu()
{
	cout << " bo bo" << endl;
}