/*
 * zoologico.hpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */

#ifndef ZOOLOGICO_HPP_
#define ZOOLOGICO_HPP_
#include "veterinario.hpp"
#include <vector>
class Zoologico
{
	vector <Animal*> jaula;

public:
	void colocarNaJaula();
	void andarNoZoologico();
};



#endif /* ZOOLOGICO_HPP_ */
