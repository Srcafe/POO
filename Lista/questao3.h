#ifndef QUESTAO3_H
#define QUESTAO3_H
#include "questao2.h"

class Empregado : public Pessoa
{
private:
    double salarioMensal;
public:
    Empregado(string nome, string endereco, string telefone,double salarioMensal);
    double getSalarioMensal() const;
    void setSalarioMensal(double value);

    void calculaAumento();
    double salarioAnual();
    friend void empregadoTeste();
};

#endif // QUESTAO3_H
