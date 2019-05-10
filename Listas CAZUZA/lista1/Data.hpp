/*
 * data.hpp
 *
 *  Created on: 13 de set de 2018
 *      Author: guit_
 */

#ifndef DATA_HPP_
#define DATA_HPP_
#include <iostream>
using namespace std;
class Data
{
	int mes, dia, ano;

public:
	Data(int = 1, int = 1,int = 1);
	~Data();
	int getDia();
	void setDia(int);
	int getMes();
	void setMes(int);
	int getAno();
	void setAno(int);
	void exibeData();
};




#endif /* DATA_HPP_ */
