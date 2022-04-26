#pragma once
#include "Selskie_.h"

TSelskie::TSelskie()
{
  zemli = 100;
}

TSelskie::TSelskie(int _zemli)
{
  zemli = _zemli;
}

TSelskie::~TSelskie()
{
}

TSelskie::TSelskie(TSelskie& p)
{
  this->zemli = p.zemli;
}

void TSelskie::SetZemli(int _zemli)
{
  zemli = _zemli;
}

int TSelskie::GetZemli()
{
  return this->zemli;
}
