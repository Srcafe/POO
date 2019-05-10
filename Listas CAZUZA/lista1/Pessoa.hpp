/*
 * Pessoa.hpp
 *
 *  Created on: 13 de set de 2018
 *      Author: guit_
 */

#ifndef PESSOA_HPP_
#define PESSOA_HPP_
#include <iostream>
#include <string>
using namespace std;
class Pessoa
{
private:
	string nome, endereco, telefone;

public:
	Pessoa(string = "!",string = "!",string = "!");
	~Pessoa();
	string getNome();
	void setNome(string);
	string getEndereco();
	void setEndereco(string);
	string getTelefone();
	void setTelefone(string);
	void printPessoa();
};




#endif /* PESSOA_HPP_ */
