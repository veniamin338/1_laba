#pragma once
#include<iostream>
#include "Zdaniy_.h"

class TMirnie :public TZdaniy
{
public:
  TMirnie();
  TMirnie(int _jiteli);
  ~TMirnie();
  TMirnie(TMirnie& p);
  virtual void Print();

  void SetJiteli(int _jiteli);
  int GetJiteli();
protected:
  int jiteli;
};