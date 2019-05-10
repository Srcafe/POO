/*
 * preguica.hpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */

#ifndef PREGUICA_HPP_
#define PREGUICA_HPP_
#include "animal.hpp"
class Preguica : public Animal
{
public:
	Preguica(string nome,int idade);
	~Preguica();
	void emitirSom();
	void correr();
};




#endif /* PREGUICA_HPP_ */
