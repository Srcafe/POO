/*
 * main.cpp
 *
 *  Created on: 27 de set de 2018
 *      Author: guit_
 */
#include "cachorro.hpp"
#include "cavalo.hpp"
#include "preguica.hpp"
#include "animal.hpp"
#include "veterinario.hpp"
#include "zoologico.hpp"
#include "imovel.hpp"
#include "velho.hpp"
#include "novo.hpp"
#include <vector>
using namespace std;
void exercicio1ao4();
void exercicio5();
int main()
{

	exercicio1ao4();
	exercicio5();

	return 0;
}
void  exercicio1ao4()
{
	Animal* a[3] = { new Cachorro("Belinha",14) , new Cavalo("Gilson",12) , new Preguica("Juju",3) };
	Veterinario v;
	Zoologico z;


	for(int i=0 ; i<3 ; i++)
	{
		a[i]->emitirSom();
	}

	cout << "\n--------------\nIndo ao veterinário!" << endl;
	for(int i=2 ; i>=0 ; i--)
	{
		v.examinar(a[i]);
	}

	cout << "\n--------------\nIndo ao zoológico!\n" << endl;
	z.colocarNaJaula();
	z.andarNoZoologico();
}
void exercicio5()
{
    vector <Imovel *> imob;
    Novo iNovo(40000.0,600000.0);
    Velho iVelho(4750.0,200000.0);
    double total = 0.0;

    cout << "Preço imovel novo: " << iNovo.getPreco() << endl;
    cout << "Preço imovel velho: " << iVelho.getPreco() << endl;


    for(int i = 0; i < 10; i++){
        if(i % 2 == 0){
            imob.push_back(new Novo(5000,500000));
            total += imob[i]->retornarValor();
        }else if(i % 2 == 1){
            imob.push_back(new Velho(2500,250000));
            total += imob[i]->retornarValor();
        }
    }

    cout << "Total da imobiliaria: " << total << endl;
}

