/*
 * main.cpp
 *
 *  Created on: 18 de out de 2018
 *      Author: guit_
 */
#include <iostream>
#include <functional>
#include <list>
#include <vector>
#include <set>
#include <map>
#include "Conta.hpp"
#include "ContaCorrente.hpp"
#include "Poupanca.hpp"
#include "Banco.hpp"
using namespace std;
bool compararNum(Conta* a, Conta* b);
bool compararNome(Conta* a, Conta* b);
void questaoA()
{
	cout << "\nQUESTÃO A (LIST)" << endl;
	list <Conta*> c;

	cout << "-->cadastrando contas" << endl;
	c.push_back(new ContaCorrente(4222,"Jailson",5000.20,6000.00));
	c.push_back(new Poupanca(4282,"Jurema",500.1,"12/12/2012"));
	c.push_back(new Poupanca(4352,"Juju",600.85,"21/02/2012"));
	c.push_back(new ContaCorrente(4862,"Janderson",55000.63,100000.00));
	cout << "-->ordenando lista" << endl;
	c.sort([](const Conta* c1, const Conta* c2){
		return c1->getNome() < c2->getNome();
	});
	cout << "-->mostrando lista" << endl;
	for(auto elem : c)
		cout << *elem << " ";
	cout << endl;
}
void questaoB()
{
	cout << "\nQUESTÃO B (VECTOR)" << endl;
	vector <Conta*> v;

	cout << "-->cadastrando contas" << endl;
	v.push_back(new ContaCorrente(4222,"Jailson",5000.20,6000.00));
	v.push_back(new Poupanca(4282,"Jurema",500.1,"12/12/2012"));
	v.push_back(new Poupanca(4352,"Juju",600.85,"21/02/2012"));
	v.push_back(new ContaCorrente(4862,"Janderson",55000.63,100000.00));

	cout << "-->mostrando somente contas poupanças" << endl;
	for(auto elem : v)
	{
		Poupanca* p_p;
		p_p = dynamic_cast<Poupanca*>(elem);
		if(p_p != nullptr)
			cout << *p_p << " ";

	}
	cout << endl;
}
void questaoC()
{
	cout << "\nQUESTÃO C (SET)" << endl;
	set <Conta*,function <bool(Conta*,Conta*)>> s(compararNum);
	set <Poupanca*,function <bool(Conta*,Conta*)>> aux(compararNome);

	cout << "-->cadastrando contas (ordenadas pelo numero de conta)" << endl;
	s.insert(new ContaCorrente(4222,"Jailson",5000.20,6000.00));
	s.insert(new Poupanca(4282,"Jurema",500.1,"12/12/2012"));
	s.insert(new Poupanca(4352,"Juju",600.85,"21/02/2012"));
	s.insert(new ContaCorrente(4862,"Janderson",55000.63,100000.00));

	cout << "-->mostrando somente contas poupanças (ordenadas pelo nome)" << endl;
	for(auto elem : s)
	{
		Poupanca* p_p;
		p_p = dynamic_cast<Poupanca*>(elem);
		if(p_p != nullptr)
			aux.insert(p_p);

	}
	for(auto elem : aux)
		cout << *elem << " ";
	cout << endl;
}
void questaoD()
{
	cout << "\nQUESTÃO D (BANCO (MAP))" << endl;
	Banco b;

	cout << "-->cadastrando contas" << endl;
	b.cadastrarConta(new ContaCorrente(4222,"Jailson",5000.20,6000.00));
	b.cadastrarConta(new Poupanca(4282,"Jurema",500.1,"12/12/2012"));
	b.cadastrarConta(new Poupanca(4352,"Juju",600.85,"21/02/2012"));
	b.cadastrarConta(new ContaCorrente(4862,"Janderson",55000.63,100000.00));
	cout << "-->mostrando saldo total de contas" << endl;
	cout << "\nSaldo Total de Contas: " << b.valorTotal() << endl;

}
int main()
{
	questaoA();
	questaoB();
	questaoC();
	questaoD();
	return 0;
}
bool compararNum(Conta* a, Conta* b)
{
	return a->getNumConta() < b->getNumConta();
}
bool compararNome(Conta* a, Conta* b)
{
	return a->getNome() < b->getNome();
}

