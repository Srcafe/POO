/*
 * NumeroRacional.hpp
 *
 *  Created on: 14 de set de 2018
 *      Author: guit_
 */

#ifndef NUMERORACIONAL_HPP_
#define NUMERORACIONAL_HPP_
#include <iostream>
using namespace std;
class NumeroRacional
{
	int numerador, denominador;

public:
	NumeroRacional(int = 1, int = 1);
	~NumeroRacional();
	void setNR(int,int);
	int getNumerador();
	int getDenominador();
	void printNR();
	friend ostream& operator<<(ostream&,const NumeroRacional&);
	friend istream& operator>>(istream&, NumeroRacional&);
	NumeroRacional& operator=(const NumeroRacional&);
	NumeroRacional operator+(const NumeroRacional&)const;
	NumeroRacional operator-(const NumeroRacional&)const;
	NumeroRacional operator/(const NumeroRacional&)const;
	NumeroRacional operator*(const NumeroRacional&)const;
};




#endif /* NUMERORACIONAL_HPP_ */
