#include "Conta.hpp"


Conta::Conta(int numConta, string nome, double saldo) :
        numConta(numConta), nome(nome), saldo(saldo) {}

Conta::~Conta() {}

int Conta::getNumConta() const{
    return numConta;
}

void Conta::setNumConta(int numConta){
    this->numConta = numConta;
}

string Conta::getNome() const{
    return nome;
}

void Conta::setNome(string nome){
    this->nome = nome;
}

double Conta::getSaldo() const{
    return saldo;
}

void Conta::setSaldo(double saldo){
    this->saldo = saldo < 0 ? 0 : saldo;
}

ostream& operator<<(ostream& out, const Conta& obj){
    out << "\n" << obj.getNumConta()
        << " "  << obj.getNome()
        << " "  << obj.getSaldo();
    return out;
}

bool Conta::deposito(double valor){
    if (valor > 0){
        setSaldo(getSaldo() + valor);
        return true;
    }
    else{
        return false;
    }
}


