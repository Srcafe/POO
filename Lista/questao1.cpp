#include "questao1.h"
#include <iostream>
using namespace std;

int Data::getMes() const
{
    return mes;
}

void Data::setMes(int value)
{
    mes = value;
}

int Data::getAno() const
{
    return ano;
}

void Data::setAno(int value)
{
    ano = value;
}

void Data::exibeData()
{
    cout<<getDia()<<"/"<<getMes()<<"/"<<getAno()<<endl;
}

Data::Data(int dia, int mes, int ano)
{
    setDia(dia);
    setMes(mes);
    setAno(ano);
}

Data::~Data()
{

}

int Data::getDia() const
{
    return dia;
}

void Data::setDia(int value)
{
    dia = value;
}
