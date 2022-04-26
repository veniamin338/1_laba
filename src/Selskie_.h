#pragma once
#include "Mirnie_.h"

class TSelskie :public TMirnie
{
public:
  TSelskie();
  TSelskie(int _zemli);
  ~TSelskie();
  TSelskie(TSelskie& p);

  void SetZemli(int _zemli);
  int GetZemli();
protected:
  int zemli;
};