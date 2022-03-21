#pragma once
#include "Gorodskie_.h"

TGorodskie::TGorodskie()
{
	 jilPloshad = 30;
	 balkon = true;
}

TGorodskie::TGorodskie(int _jilPloshad, bool _balkon)
{
	jilPloshad = _jilPloshad;
	balkon = _balkon;
}

TGorodskie::~TGorodskie()
{
}

TGorodskie::TGorodskie(TGorodskie& p)
{
	this->jilPloshad = p.jilPloshad;
	this->balkon = p.balkon;
}

void TGorodskie::SetGilPloshad(int _jilPloshad)
{
	jilPloshad = _jilPloshad;
}

int TGorodskie::GetGilPloshad()
{
	return this->jilPloshad;
}

void TGorodskie::SetBalkon(bool _balkon)
{
	balkon = _balkon;
}

bool TGorodskie::GetBalkon()
{
	return this-> balkon;
}

