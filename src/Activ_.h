#pragma once
#include "Voennie_.h"


class TActiv : public TVoennie
{
public:
	TActiv();
	TActiv(int _vidVooryjeniyN);
	~TActiv();
	TActiv(TActiv& p);
	void PrintActiv();


	void SetVidVooryjeniyN(int _vidVooryjeniyN);
	void SetVidVooryjeniy(int _vidVooryjeniy, int _i);
	int GetVidVooryjeniyN();
	//int* GetVidVooryjeniy();
protected:
	int* vidVooryjeniy;
	int vidVooryjeniyN;
};
