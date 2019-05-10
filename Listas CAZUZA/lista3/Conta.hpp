#ifndef CONTA_H
#define CONTA_H

#include<string>
#include<iostream>

using namespace std;

class Conta
{
    int numConta;
    string nome;
    double saldo;
public:
    Conta(int=0, string="", double=0.0);
    virtual ~Conta();
    int getNumConta() const;
    void setNumConta(int);
    string getNome() const;
    void setNome(string);
    double getSaldo() const;
    void setSaldo(double);
    friend ostream& operator<<(ostream&, const Conta&);
    bool deposito(double);
    virtual bool retirada(double&) = 0;
};

#endif // CONTA_H
