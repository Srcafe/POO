#include "questao3.h"
#include "questao2.h"
#include <iostream>
using namespace std;

Empregado::Empregado(string nome, string endereco, string telefone,double salarioMensal) :
    Pessoa(nome,endereco,telefone)
{

    if(salarioMensal < 0.0){
        setSalarioMensal(0.0);
    }
    else{
        setSalarioMensal(salarioMensal);
    }
}

double Empregado::getSalarioMensal() const
{
    return salarioMensal;
}

void Empregado::setSalarioMensal(double value)
{
    salarioMensal = value;
}

void Empregado::calculaAumento()
{
    setSalarioMensal(getSalarioMensal() + (0.1*getSalarioMensal()));

}

double Empregado::salarioAnual()
{
    return getSalarioMensal() * 12;
}
