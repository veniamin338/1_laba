#include<iostream>
#include "Zdaniy_.h"
#include "Mirnie_.h"
#include "Gorodskie_.h"
#include "Selskie_.h"
#include "Voennie_.h"
#include "Activ_.h"
#include "Passiv_.h"

#include "Administraciy_.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
  TZdaniy* a = new TGorodskie(800, false);


  //a->Print();

  TMirnie b(28);
  b.SetMaterial("corton");
  //b.Print();
  //cout << endl << endl;
  TActiv k(6);
  k.SetVidVooryjeniy(1, 5);

  //k.Print();
  TAdministraciy spisok;
  spisok.SetKarta(a);
  spisok.SetKarta(&b);
  spisok.SetKarta(&k);
  //spisok.SetKarta(a);
  spisok.Print();





  return 0;
}