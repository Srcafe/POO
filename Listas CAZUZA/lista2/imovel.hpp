/*
 * imovel.hpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */

#ifndef IMOVEL_HPP_
#define IMOVEL_HPP_
#include <iostream>
using namespace std;

class Imovel
{
    string endereco;
    double preco;

public:
    Imovel(const string &endereco="",const double &preco=0.0);
    virtual ~Imovel();
    string getEndereco();
    double getPreco() const;
    void setEndereco(const string&);
    void setPreco(const double&);
    virtual double retornarValor() const = 0;

};



#endif /* IMOVEL_HPP_ */
