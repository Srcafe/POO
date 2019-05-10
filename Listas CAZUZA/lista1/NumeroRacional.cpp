/*
 * NumeroRacional.cpp
 *
 *  Created on: 14 de set de 2018
 *      Author: guit_
 */
#include"NumeroRacional.hpp"
NumeroRacional :: NumeroRacional(int numerador, int denominador) : numerador(numerador), denominador(denominador){}
NumeroRacional :: ~NumeroRacional(){}
void NumeroRacional :: setNR(int numerador,int denominador)
{
	this->numerador = numerador;
	this->denominador = denominador;
}
int NumeroRacional :: getNumerador()
{
	return numerador;
}
int NumeroRacional :: getDenominador()
{
	return denominador;
}
void NumeroRacional :: printNR()
{
	cout << "(" << numerador << "/" << denominador << ")" ;
}
ostream& operator<<(ostream& out,const NumeroRacional& x)
{
	out << "(" << x.numerador << "/" << x.denominador << ")";
	return out;
}
istream& operator>>(istream& in, NumeroRacional& x)
{
	in >> x.numerador >> x.denominador;
	return in;
}
NumeroRacional& NumeroRacional :: operator=(const NumeroRacional& x)
{
	if(this == &x)
		return *this;
	this->numerador = x.numerador;
	this->denominador = x.denominador;
	return *this;
}
NumeroRacional NumeroRacional :: operator+(const NumeroRacional& x)const
{
	NumeroRacional tmp;
	tmp.denominador = this->denominador * x.denominador;
	tmp.numerador = (x.denominador*this->numerador) + (this->denominador*x.numerador);
	return tmp;
}
NumeroRacional NumeroRacional :: operator-(const NumeroRacional& x)const
{
	NumeroRacional tmp;
	tmp.denominador = this->denominador * x.denominador;
	tmp.numerador = (x.denominador*this->numerador) - (this->denominador*x.numerador);
	return tmp;
}
NumeroRacional NumeroRacional :: operator/(const NumeroRacional& x)const
{
	NumeroRacional tmp;
	tmp.numerador = this->numerador * x.denominador;
	tmp.denominador = this->denominador * x.numerador;
	return tmp;
}
NumeroRacional NumeroRacional :: operator*(const NumeroRacional& x)const
{
	NumeroRacional tmp;
	tmp.numerador = this->numerador * x.numerador;
	tmp.denominador = this->denominador * x.denominador;
	return tmp;

}



