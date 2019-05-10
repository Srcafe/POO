#ifndef POUPANCA_H
#define POUPANCA_H

#include "Conta.hpp"

class Poupanca : public Conta
{
    string data;
public:
    Poupanca(int=0, string="", double=0.0, string="");
    Poupanca(Poupanca&);
    virtual ~Poupanca();
    void setData(string data);
    string getData() const;
    virtual bool retirada(double&);
    friend ostream& operator<<(ostream&, const Poupanca&);
};

#endif // POUPANCA_H
