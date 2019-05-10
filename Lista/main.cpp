#include <iostream>
#include <new>
#include <cstdlib>
#include <cstdio>
#include "questao1.h"
#include "questao2.h"
#include "questao3.h"

#include "questao4.h"
using namespace std;

int main()
{

    int opcao;

    cout<<"[1] para questão 1 \n [3] para questão 3 \n [4] para questão 4 \n";
    cin>>opcao;

    Data *date = new Data(02,03,1998);
    Empregado *e1 = new Empregado("lucas", "Rua Artur Vitorino Coelho", "4002-8922", 1000.00);
    Empregado *e2 = new Empregado("Danilo", "Rua Janaina Ferreira", "5584-3212",2000.00);
    NumeroRacional nr(10.0,10.0);
    NumeroRacional nr2(20.0,5.0);

    switch(opcao){
    case 1:
        date->exibeData();
        break;

    case 3:
        cout<<"----Empregado 1 ----- "<<endl;
        cout<<"Salario anual: "<<e1->salarioAnual()<<endl;
        e1->calculaAumento();
        cout<<"Salario anual com aumento: "<<e1->salarioAnual()<<endl;
        cout<<endl;


        cout<<"----Empregado 2------ "<<endl;
        cout<<"Salario anual: "<<e2->salarioAnual()<<endl;
        e2->calculaAumento();
        cout<<"Salario anual com aumento: "<<e2->salarioAnual()<<endl;

        break;
    case 4:
        cout<<"Soma de objetos: "<<nr + nr2<<endl;
        cout<<"Subtração de objetos: "<<nr - nr2<<endl;
        cout<<"Produto de objetos: "<<nr * nr2<<endl;
        cout<<"Divisão entre objetos: "<<nr / nr2<<endl;

        break;
    }







    return 0;
}
