#pragma once
#include<iostream>
#include "Voennie_.h"

TVoennie::TVoennie()
{
	this->ohrana = 0;
}

TVoennie::TVoennie(int _ohrana)
{
	this->ohrana = _ohrana;
}

TVoennie::~TVoennie()
{
}

void TVoennie::Print()
{
	cout << "material = " << material << "\netaji = " << etaji << "\nlift = " << lift << endl;
	cout << "ohrana = " << ohrana << endl;
}

void TVoennie::SetOhrana(int _ohrana)
{
	this->ohrana = _ohrana;
}

int TVoennie::GetOhrana()
{
	return this->ohrana;
}
