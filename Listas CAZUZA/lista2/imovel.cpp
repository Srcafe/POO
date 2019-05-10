/*
 * imovel.cpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */
#include "imovel.hpp"

Imovel :: Imovel(const string &endereco, const double &preco) : endereco(endereco), preco(preco){}
Imovel :: ~Imovel(){}
void Imovel :: setEndereco(const string& endereco){
    this->endereco = endereco;
}
void Imovel :: setPreco(const double& preco){
    this->preco = preco;
}
string Imovel :: getEndereco(){
    return endereco;
}
double Imovel :: getPreco() const {
    return preco;
}


