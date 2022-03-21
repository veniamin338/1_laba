#pragma once
#include<iostream>
#include "Zdaniy_.h"

class TVoennie :public TZdaniy
{
public:
	TVoennie();
	TVoennie(int _ohrana);
	~TVoennie();
	void PrintVoennie();

	void SetOhrana(int _ohrana);
	int GetOhrana();
protected:
	int ohrana;
};