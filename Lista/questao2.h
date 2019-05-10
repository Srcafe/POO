#ifndef QUESTAO2_H
#define QUESTAO2_H

#include <string>
using namespace std;
class Pessoa
{
private:

    string nome,endereco,telefone;
public:
    Pessoa(string nome, string endereco, string telefone);
    ~Pessoa();

    string getNome() const;
    void setNome(const string &value);
    string getEndereco() const;
    void setEndereco(const string &value);
    string getTelefone() const;
    void setTelefone(const string &value);
};

#endif // QUESTAO2_H
