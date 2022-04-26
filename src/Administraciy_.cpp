#pragma once
#include "Administraciy_.h"

TAdministraciy::TAdministraciy()
{
  kvoZdaniy = 0;
  karta = new TZdaniy * [kvoZdaniy];
}

TAdministraciy::~TAdministraciy()
{
  if (kvoZdaniy != 0)
    delete[] karta;
  kvoZdaniy = 0;
}

void TAdministraciy::SetKarta(TZdaniy* n)
{
  TZdaniy** tmp;
  int r = kvoZdaniy + 1;
  tmp = new TZdaniy * [r];
  for (int i = 0; i < kvoZdaniy; i++)
    tmp[i] = karta[i];
  tmp[r - 1] = n;
  delete[] karta;
  kvoZdaniy = r;
  karta = tmp;

}

void TAdministraciy::Print()
{
  for (int i = 0; i < kvoZdaniy; i++)
    karta[i]->Print();
}
