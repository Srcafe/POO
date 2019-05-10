/*
 * zoologico.cpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */
#include "zoologico.hpp"
#include "cavalo.hpp"
#include "preguica.hpp"
void Zoologico :: colocarNaJaula()
{
	jaula.push_back(new Cachorro("Osvaldo",5));
	jaula.push_back(new Cachorro("Osvaldo",5));
	jaula.push_back(new Cavalo("Osvaldo",5));
	jaula.push_back(new Cavalo("Osvaldo",5));
	jaula.push_back(new Preguica("Osvaldo",5));
	jaula.push_back(new Preguica("Osvaldo",5));
	jaula.push_back(new Cachorro("Osvaldo",5));
	jaula.push_back(new Cavalo("Osvaldo",5));
	jaula.push_back(new Preguica("Osvaldo",5));
	jaula.push_back(new Preguica("Osvaldo",5));
}
void Zoologico :: andarNoZoologico()
{
	for(int i=0 ; i <10 ; i++)
	{
		jaula[i]->emitirSom();
	}
}

/*for(int i=0; i<10 ; i++)
	{
		if(i<4)
			jaula.push_back(new Cachorro);
		else if(i<8)
			jaula.push_back(new Cavalo);
		else
			jaula.push_back(new Preguica);
	}

*/
