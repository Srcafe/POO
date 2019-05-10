/*
 * Banco.hpp
 *
 *  Created on: 18 de out de 2018
 *      Author: guit_
 */

#ifndef BANCO_HPP_
#define BANCO_HPP_
#include <map>
#include <iostream>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "Poupanca.hpp"
class Banco
{
	map <int,Conta*> nubank;

public:

	void cadastrarConta(Conta*);
	double valorTotal();

};




#endif /* BANCO_HPP_ */
