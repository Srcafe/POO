/*
 * DataTeste.cpp
 *
 *  Created on: 13 de set de 2018
 *      Author: guit_
 */
#include "Data.hpp"
#include "Pessoa.hpp"
#include "Relogio.hpp"
#include "NumeroRacional.hpp"
#include <stdlib.h>


void DataTeste();
void PessoaTeste();
void RelogioTeste();
void RacionalTeste();
int main()
{
	DataTeste();
	PessoaTeste();
	RelogioTeste();
	RacionalTeste();
}
void DataTeste()
{
	Data obj1(4,6,1998);
	Data obj2;
	int mes, dia, ano;

	cout << "\nEXERCICIO 1\n\n";
	obj1.exibeData();

	cout << "Mes: " ;
	cin >> mes;
	obj2.setMes(mes);
	cout << "Dia: " ;
	cin >> dia;
	obj2.setDia(dia);
	cout << "Ano: " ;
	cin >> ano;
	obj2.setAno(ano);

	obj2.exibeData();

	mes = obj1.getMes();
	dia = obj1.getDia();
	obj2.setDia(dia);
	obj2.setMes(mes);

	obj2.exibeData();
}
void PessoaTeste()
{
	Pessoa obj1("Guilherme","Ouro Preto","0000-0000");
	Pessoa obj2;
	string nome, endereco, telefone;

	cout << "\n\nEXERCICIO 2\n\n";

	obj1.printPessoa();

	cout << "Nome: " ;
	fflush(stdin);
	getline(cin,nome);
	obj2.setNome(nome);
	cout << "Endereco: " ;
	getline(cin,endereco);
	obj2.setEndereco(endereco);
	cout << "Telefone: " ;
	getline(cin,telefone);
	obj2.setTelefone(telefone);

	obj2.printPessoa();

	nome = obj1.getNome();
	telefone = obj1.getTelefone();
	cout << endl << nome << " -> " << telefone << endl;
}
void RelogioTeste()
{
	Relogio obj(23,59,59);
	int h,m,s;

	cout << "\n\nEXERCICIO 3\n\n";

	cout << "Hora: ";
	cin >> h;
	cout << "Minuto: ";
	cin >> m;
	cout << "Segundo: ";
	cin >> s;
	obj.setHora(h,m,s);

	for(int i=0 ; i < h*2 ; i++)
	{
		obj.printRelogio();
		obj.avancaHorario();
	}
}
void RacionalTeste()
{
	NumeroRacional obj1,obj2,obj3;

	cout << "NumeroRacional 1: Numerador Denominador" << endl;
	cin >> obj1;
	cout << "NumeroRacional 2: Numerador Denominador" << endl;
	cin >> obj2;

	obj3 = obj1 * obj2;
	cout << obj1 << " * " << obj2 << " = " << obj3 << endl;

	obj3 = obj1 / obj2;
	cout << obj1 << " / " << obj2 << " = " << obj3 << endl;


	obj3 = obj1 + obj2;
	cout << obj1 << " + " << obj2 << " = " << obj3 << endl;

	obj3 = obj1 - obj2;
	cout << obj1 << " - " << obj2 << " = " << obj3 << endl;
}
