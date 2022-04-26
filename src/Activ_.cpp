#pragma one
#include "Activ_.h"

TActiv::TActiv()
{
  vidVooryjeniyN = 5;
  vidVooryjeniy = new int[vidVooryjeniyN];
}

TActiv::TActiv(int _vidVooryjeniyN)
{
  vidVooryjeniyN = _vidVooryjeniyN;
  vidVooryjeniy = new int[_vidVooryjeniyN];
}

TActiv::~TActiv()
{
  delete[] this->vidVooryjeniy;
}

TActiv::TActiv(TActiv& p)
{
  this->vidVooryjeniyN = p.vidVooryjeniyN;
  for (int i = 0; i < vidVooryjeniyN; i++)
    this->vidVooryjeniy[i] = p.vidVooryjeniy[i];

}

void TActiv::Print()
{
  cout << "material = " << material << "\netaji = " << etaji << "\nlift = " << lift << endl;
  cout << "ohrana = " << ohrana << endl;
  cout << "kolichestvo_voorygeniy = " << vidVooryjeniyN << endl;
  //for (int i = 0; i < vidVooryjeniyN; i++)
    //cout <<"vidVooryjeniy["<<i<<"] = "<< vidVooryjeniy[i]<<endl;
}

void TActiv::SetVidVooryjeniyN(int _vidVooryjeniyN)
{
  if (_vidVooryjeniyN > 0)
  {
    int* temp = new int[_vidVooryjeniyN];
    for (int i = 0; i < (vidVooryjeniyN > _vidVooryjeniyN) ? _vidVooryjeniyN : vidVooryjeniyN; i++)
      temp[i] = vidVooryjeniy[i];
    delete[] vidVooryjeniy;
    vidVooryjeniy = temp;
    vidVooryjeniyN = _vidVooryjeniyN;
  }


}

void TActiv::SetVidVooryjeniy(int _vidVooryjeniy, int _i)
{
  if (_i > 0 && _i < vidVooryjeniyN)
    this->vidVooryjeniy[_i] = _vidVooryjeniy;
}

int TActiv::GetVidVooryjeniyN()
{
  return this->vidVooryjeniyN;
}
