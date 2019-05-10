/*
 * cachorro.hpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */

#ifndef CACHORRO_HPP_
#define CACHORRO_HPP_
#include "animal.hpp"
class Cachorro : public Animal
{
public:
	Cachorro(string = "SemNome",int = 0);
	~Cachorro();
	void emitirSom();
	void correr();
};




#endif /* CACHORRO_HPP_ */
