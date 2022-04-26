#pragma once
#include "Voennie_.h"

class TPassiv : public TVoennie
{
public:
  TPassiv();
  TPassiv(int _rabochie);
  ~TPassiv();
  TPassiv(TPassiv& p);

  void SetRabochie(int _rabochie);
  int GetRabochie();
protected:
  int rabochie;
};
