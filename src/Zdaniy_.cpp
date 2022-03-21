#pragma one
#include <iostream>
#include <string>
#include"Zdaniy_.h"

using std::string;

TZdaniy::TZdaniy()
{
	material = "gzb";
	etaji = 5;
	lift = true;
}

TZdaniy::TZdaniy(string _material, int _etaji, bool _lift)
{
	this->material = _material;
	this->etaji = _etaji;
	this->lift = _lift;
}

TZdaniy::~TZdaniy()
{
}

TZdaniy::TZdaniy(TZdaniy& p)
{
	this->material = p.material;
	this->etaji = p.etaji;
	this->lift = p.lift;
}

void TZdaniy::SetMaterial(string _material)
{
	this->material = _material;
}

void TZdaniy::SetEtaji(int _etaji)
{
	this->etaji = _etaji;
}

void TZdaniy::SetLift(bool _lift)
{
	this->lift = _lift;
}

string TZdaniy::GetMaterial()
{
	return material;
}

int TZdaniy::GetEtaji()
{
	return this->etaji;
}

bool TZdaniy::GetLift()
{
	return lift;
}

void TZdaniy::Print1()
{
	cout << "material = " << material << "\netaji = " << etaji << "\nlift = " << lift <<endl;
}
