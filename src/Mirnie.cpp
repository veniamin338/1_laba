#pragma one

#include "Mirnie_.h"

TMirnie::TMirnie()
{
  this->jiteli = 0;
}

TMirnie::TMirnie(int _jiteli)
{
  this->jiteli = _jiteli;
}

TMirnie::~TMirnie()
{
}

TMirnie::TMirnie(TMirnie& p)
{
  this->jiteli = p.jiteli;
}

void TMirnie::Print()
{
  cout << "material = " << material << "\netaji = " << etaji << "\nlift = " << lift << endl;
  cout << "jiteli = " << jiteli << endl;
}



void TMirnie::SetJiteli(int _jiteli)
{
  this->jiteli = _jiteli;
}

int TMirnie::GetJiteli()
{
  return this->jiteli;
}
