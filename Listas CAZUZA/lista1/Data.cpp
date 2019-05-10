/*
 * data.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: guit_
 */
#include "Data.hpp"
Data :: Data(int mes, int dia,int ano) :  mes(mes), dia(dia), ano(ano){}
Data :: ~Data(){}
int Data :: getDia()
{
	return dia;
}
void Data :: setDia(int dia)
{
	this->dia = dia;
}
int Data :: getMes()
{
	return mes;
}
void Data :: setMes(int mes)
{
	this->mes = mes;
}
int Data :: getAno()
{
	return ano;
}
void Data :: setAno(int ano)
{
	this->ano = ano;
}
void Data :: exibeData()
{
	cout << mes << "/" << dia << "/" << ano << endl;
}



