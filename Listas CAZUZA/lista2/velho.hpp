/*
 * velho.hpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */

#ifndef VELHO_HPP_
#define VELHO_HPP_
#include "imovel.hpp"

class Velho : public Imovel
{
    double desconto;

public:
    Velho(double desconto=0.0, const double& preco=0.0);
    double getDesconto();
    void setDesconto(double);
    ~Velho();
    virtual double retornarValor() const;
};




#endif /* VELHO_HPP_ */
