/*
 * cachorro.cpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */
#include "cachorro.hpp"
Cachorro :: Cachorro(string nome,int idade) : Animal(nome,idade){}
Cachorro :: ~Cachorro(){}
void Cachorro :: emitirSom()
{
	cout << "au AU au AU au AU" << endl;
}
void Cachorro :: correr()
{
	cout << "\"CORRENDO\"" << endl;
}


