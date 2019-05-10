/*
 * relogio.cpp
 *
 *  Created on: 11 de set de 2018
 *      Author: guit_
 */
#include <iostream>
using namespace std;
#include "Relogio.hpp"

Relogio :: Relogio(int h, int m,int s) : h(h), m(m), s(s) {}

Relogio :: ~Relogio(){}

void Relogio :: setHora(int h, int m, int s)
{
	this->h = h;
	this->m = m;
	this->s = s;
}
void Relogio :: getHora(int& h, int& m, int &s)
{
	h = this->h;
	m = this->m;
	s = this->s;
}
void Relogio :: printRelogio()
{
	cout << setfill('0') << setw(2) << h << ":" << setw(2) << m << ":" << setw(2) << s << endl;
}

void Relogio :: avancaHorario()
{
	if(s == 59)
	{
		s = 0;
		if(m == 59)
		{
			m=0;
			if(h == 23)
				h=0;
			else
				h++;
		}
		else
			m++;
	}
	else
		s++;
}




