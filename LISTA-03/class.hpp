#ifndef CLASS_HPP
#define CLASS_HPP
#include<string>
#include<iostream>
using namespace std;

class Humano{
private:
    int idade;
    string nome;
    string cpf;

public:
    Humano(int idade_aux,string nome_aux,string CPF_aux);
    string getNome()const;
    void setNome(string nome_aux);
    int getIdade()const;
    void setIdade(int idade_aux);
    string getCPF()const;
    void setCPF(string CPF_aux);
    void imprimeHumano();

};


#endif
