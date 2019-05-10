/*
 * relogio.hpp
 *
 *  Created on: 11 de set de 2018
 *      Author: guit_
 */

#ifndef RELOGIO_HPP_
#define RELOGIO_HPP_
#include <iomanip>
class Relogio
{
	int h, m, s;

public:
	Relogio(int h=0, int m=0,int s=0);
	~Relogio();
	void printRelogio();
	void setHora(int,int,int);
	void getHora(int&,int&,int&);
	void avancaHorario();

};




#endif /* RELOGIO_HPP_ */
