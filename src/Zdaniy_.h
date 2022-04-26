#pragma once
#include <string>
#include<iostream>
using std::cout;
using std::endl;
using std::string;

class TZdaniy
{
public:
  TZdaniy();
  TZdaniy(string _material, int _etaji, bool _lift);
  ~TZdaniy();
  TZdaniy(TZdaniy& p);
  void SetMaterial(string _material);
  void SetEtaji(int _etaji);
  void SetLift(bool _lift);
  string GetMaterial();
  int GetEtaji();
  bool GetLift();

  virtual void Print() = 0;

protected:
  string material;
  int etaji;
  bool lift;

};
