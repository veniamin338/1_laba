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

void TPassiv::SetRabochie(int _rabochie)
{
	rabochie = _rabochie;
}

int TPassiv::GetRabochie()
{
	return this->rabochie;
}
