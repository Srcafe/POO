#include "ContaCorrente.hpp"

ContaCorrente::ContaCorrente(int numConta, string nome, double saldo, double limite) :
    Conta(numConta, nome, saldo), limite(limite) {}

ContaCorrente::ContaCorrente(ContaCorrente& c){
    setNumConta(c.getNumConta());
    setNome(c.getNome());
    setSaldo(c.getSaldo());
    setLimite(c.getLimite());
}

ContaCorrente::~ContaCorrente(){}

double ContaCorrente::getLimite() const{
    return limite;
}

void ContaCorrente::setLimite(double val) {
    limite = val < 0 ? 0 : val;
}

bool ContaCorrente::retirada(double& valor){
    if ( valor > 0 && (getSaldo() + limite > valor) ){
        setSaldo(getSaldo() - valor);
        return true;
    }
    else{
        return false;
    }
}

ostream& operator<<(ostream& out, const ContaCorrente& obj){
    out << "\n " << obj.getNumConta()
        << " " << obj.getNome()
        << " " << obj.getSaldo()
        << " " << obj.getLimite();
    return out;
}

