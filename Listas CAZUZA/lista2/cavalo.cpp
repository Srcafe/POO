/*
 * cavalo.cpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */
#include "cavalo.hpp"
Cavalo :: Cavalo(string nome,int idade) : Animal(nome,idade){}
Cavalo :: ~Cavalo(){}
void Cavalo :: emitirSom()
{
	cout << "ihhhhhhhhhirhirhiriririri" << endl;
}
void Cavalo :: correr()
{
	cout << "\"(POCOTÓ POCOTÓ)\"" << endl;
}


