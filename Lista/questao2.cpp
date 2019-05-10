#include "questao2.h"
#include <string>


string Pessoa::getEndereco() const
{
    return endereco;
}

void Pessoa::setEndereco(const string &value)
{
    endereco = value;
}

string Pessoa::getTelefone() const
{
    return telefone;
}

void Pessoa::setTelefone(const string &value)
{
    telefone = value;
}

Pessoa::Pessoa(string nome, string endereco, string telefone)
{
    setNome(nome);
    setEndereco(endereco);
    setTelefone(telefone);
}

string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string &value)
{
    nome = value;
}
