/*
 * velho.cpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */
#include "velho.hpp"

Velho :: Velho(double desconto,const double& preco) : desconto(desconto), Imovel("Teste",preco){}
Velho :: ~Velho(){}
double Velho :: getDesconto(){
    return desconto;
}
void Velho :: setDesconto(double desconto){
    this->desconto=desconto;
}
double Velho :: retornarValor()const{
    return getPreco()-this->desconto;
}

