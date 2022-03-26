#pragma once
#include "Mirnie_.h"

class TGorodskie :public TMirnie
{
public:
	TGorodskie();
	TGorodskie(int _jilPloshad,bool _balkon);
	~TGorodskie();
	TGorodskie(TGorodskie& p);
	void Print();

	void SetGilPloshad(int _jilPloshad);
	int GetGilPloshad();
	void SetBalkon(bool _balkon);
	string GetBalkon();
protected:
	int jilPloshad;
	bool balkon;
};
