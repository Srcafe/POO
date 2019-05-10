#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H

#include "Conta.hpp"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente(int=0, string="", double=0.0, double=0.0);
        ContaCorrente(ContaCorrente&);
        virtual ~ContaCorrente();

        double getLimite() const;
        void setLimite(double val);
        virtual bool retirada(double&);
        friend ostream& operator<<(ostream&, const ContaCorrente&);

    private:
        double limite;
};

#endif // CONTACORRENTE_H
