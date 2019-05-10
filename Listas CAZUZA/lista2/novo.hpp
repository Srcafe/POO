/*
 * novo.hpp
 *
 *  Created on: 29 de set de 2018
 *      Author: guit_
 */

#ifndef NOVO_HPP_
#define NOVO_HPP_
#include "imovel.hpp"

class Novo : public Imovel
{
    double adicional;

public:
    Novo(double = 0.0, const double& = 0.0);
    ~Novo();
    double getAdicional();
    void setAdicional(double);
    virtual double retornarValor() const;
};




#endif /* NOVO_HPP_ */
