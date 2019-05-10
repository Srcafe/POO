/*
 * cavalo.hpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */

#ifndef CAVALO_HPP_
#define CAVALO_HPP_
#include "animal.hpp"
class Cavalo : public Animal
{
public:
	Cavalo(string nome,int idade);
	~Cavalo();
	void emitirSom();
	void correr();
};




#endif /* CAVALO_HPP_ */
