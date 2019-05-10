#include "class.hpp"
using namespace std;


int main(){
    string cpf;
    string nome;
    int idade;

    cout << "Digite a idade do HUMANO: ";
    cin >> idade;
    cin.ignore();
    cout << "\nDigite o nome do HUMANO:";
    getline(cin,nome);
    cout << nome;
    cout << "\nDigite o CPF do HUMANO: ";
    cin.ignore();
    getline(cin,cpf);

    Humano* humano1 = new Humano(idade,nome,cpf);

    int opc = 0;
    cout << "Digite a OPC: ";
    cin >> opc;
    /*switch (opc) {
        case 1:
            gato->imprimeFelino();
    }*/



    return 0;
}
