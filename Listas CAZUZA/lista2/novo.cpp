/*
 * novo.cpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */
#include "novo.hpp"

Novo :: Novo(double adicional,const double& preco) : adicional(adicional), Imovel("Teste",preco){}
Novo :: ~Novo(){}
void Novo :: setAdicional(double adicional){
    this->adicional=adicional;
}
double Novo :: getAdicional(){
    return adicional;
}
double Novo :: retornarValor()const{
    //double preco= Imovel::getPreco();
    return this->adicional+ getPreco();
}



