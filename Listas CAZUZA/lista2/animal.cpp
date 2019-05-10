/*
 * animal.cpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */
#include "animal.hpp"
Animal :: Animal(string nome, int idade) : nome(nome)
{
	setIdade(idade);
}
Animal :: ~Animal(){}
void Animal :: setNome(string nome)
{
	this->nome = nome;
}
string Animal ::  getNome()
{
	return nome;
}
void Animal :: setIdade(int idade)
{
	if(idade >= 0)
		this->idade = idade;
	else
		this->idade = 0;
}
int Animal :: getIdade()
{
	return idade;
}
void Animal :: emitirSom()
{
	cout << "SomGeralDosAnimais" << endl;
}
void Animal :: printAnimal()
{
	cout << "Nome: " << nome << endl;
	cout << "Idade: " << idade << endl;
}


