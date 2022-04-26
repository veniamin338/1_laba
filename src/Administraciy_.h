#pragma once
#include "Zdaniy_.h"

class TAdministraciy
{
public:
  TAdministraciy();
  ~TAdministraciy();

  void SetKarta(TZdaniy* n);
  void Print();
protected:
  int kvoZdaniy;
  TZdaniy** karta;
};
