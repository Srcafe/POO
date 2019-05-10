#include "Poupanca.hpp"


Poupanca::Poupanca(int numConta, string nome, double saldo, string data) :
    Conta(numConta, nome, saldo), data(data) {}

Poupanca::Poupanca(Poupanca& p){
    setNumConta(p.getNumConta());
    setNome(p.getNome());
    setSaldo(p.getSaldo());
    setData(p.getData());
}

Poupanca::~Poupanca(){}

void Poupanca::setData(string data){
    this->data = data;
}

string Poupanca::getData() const{
    return data;
}

bool Poupanca::retirada(double& valor){
    if ( valor > getSaldo() ){
        setSaldo(getSaldo() - valor);
        return true;
    }
    else{
        return false;
    }
}

ostream& operator<<(ostream& out, const Poupanca& obj){
    out << "\n" << obj.getNumConta()
        << " " << obj.getNome()
        << " " << obj.getSaldo()
        << " " << obj.getData();
    return out;
}
