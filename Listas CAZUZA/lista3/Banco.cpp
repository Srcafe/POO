/*
 * Banco.cpp
 *
 *  Created on: 18 de out de 2018
 *      Author: guit_
 */
#include "Banco.hpp"
void Banco :: cadastrarConta(Conta* c)
{
	//nubank.insert(make_pair (c->getNumConta(),c) );
	nubank[c->getNumConta()] = c;

}
double Banco :: valorTotal()
{	double tot_p, tot_c;
	Poupanca* auxP;
	ContaCorrente* auxC;

	for(auto elem : nubank)
	{
		auxP = dynamic_cast<Poupanca*>(elem.second);
		auxC = dynamic_cast<ContaCorrente*>(elem.second);
		if(auxP != nullptr)
			tot_p += (*auxP).getSaldo();
		else if(auxC != nullptr)
				tot_c += (*auxC).getSaldo();
	}
	return tot_c + tot_p;
}


