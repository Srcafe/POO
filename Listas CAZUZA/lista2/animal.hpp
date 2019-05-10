/*
 * animal.hpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */

#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_
#include <iostream>
using namespace std;
class Animal
{
	string nome;
	int idade;

public:

	Animal(string = "SemNome", int = 0);
	virtual ~Animal();
	void setNome(string);
	string getNome();
	void setIdade(int);
	int getIdade();
	virtual void emitirSom();
	void printAnimal();

};




#endif /* ANIMAL_HPP_ */
