/*
 * preguica.cpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */
#include "preguica.hpp"
Preguica :: Preguica(string nome,int idade) : Animal(nome,idade){}
Preguica :: ~Preguica(){}
void Preguica :: emitirSom()
{
	cout << "zZZZzzzzZZzZzzzZZzZzZZzz" << endl;
}
void Preguica :: correr()
{
	cout << "\"SUBINDO NA ARVORE\"" << endl;
}



