#include<iostream>
#include "Zdaniy_.h"
#include "Mirnie_.h"
#include "Gorodskie_.h"
#include "Selskie_.h"
#include "Voennie_.h"
#include "Activ_.h"
#include "Passiv_.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
  TZdaniy a("gzb", 5, false);

  //cout << a.GetMaterial() << a.GetEtaji() << a.GetLift() << endl;
  a.Print1();
  cout << endl << endl;
  TMirnie b(28);
  b.SetMaterial("corton");
  b.Print2();
  cout << endl << endl;
  TActiv k(6);
  k.SetVidVooryjeniy(1, 5);
  k.SetVidVooryjeniy(1, 4);
  k.SetVidVooryjeniy(1, 1);
  k.PrintActiv();









  return 0;
}