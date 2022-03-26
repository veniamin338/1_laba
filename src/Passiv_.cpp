#pragma one
#include "Passiv_.h"

TPassiv::TPassiv()
{
	rabochie = 0;
}

TPassiv::TPassiv(int _rabochie)
{
	rabochie = _rabochie;
}

TPassiv::~TPassiv()
{
}

TPassiv::TPassiv(TPassiv& p)
{
	rabochie = p.rabochie;
}

void TPassiv::Print()
{
	cout << "material = " << material << "\netaji = " << etaji << "\nlift = " << lift << endl;
	cout << "ohrana = " << ohrana <<"rabochie = "<<rabochie<< endl;
}

void TPassiv::SetRabochie(int _rabochie)
{
	rabochie = _rabochie;
}

int TPassiv::GetRabochie()
{
	return this->rabochie;
}
