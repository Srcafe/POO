/*
 * Pessoa.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: guit_
 */
#include "Pessoa.hpp"
Pessoa :: Pessoa(string nome,string endereco,string telefone) : nome(nome), endereco(endereco), telefone(telefone){}
Pessoa :: ~Pessoa(){}
string Pessoa :: getNome()
{
	return nome;
}
void Pessoa :: setNome(string nome)
{
	this->nome = nome;
}
string Pessoa :: getEndereco()
{
	return endereco;
}
void Pessoa :: setEndereco(string endereco)
{
	this->endereco = endereco;
}
string Pessoa :: getTelefone()
{
	return telefone;
}
void Pessoa :: setTelefone(string telefone)
{
	this->telefone = telefone;
}
void Pessoa :: printPessoa()
{
	cout << "Nome: " << nome << endl;
	cout << "Endereco: " << endereco << endl;
	cout << "Telefone: " << telefone << endl;
}


