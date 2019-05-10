#ifndef DESEMPREGADO_HPP
#define DESEMPREGADO_HPP
#include"pessoa.hpp"
/*
    string nome_pessoa;
    int idade_pessoa;
    Endereco endereco_pessoa;
*/
class Desempregado : public Pessoa
{
public:
    int tempo_de_desemprego;
    char lista_skills[200];
public:
    Desempregado();
    Desempregado(int tempo_de_desemprego,char* lista_skills,string nome_pessoa,int idade_pessoa,Endereco endereco_pessoa);
    ~Desempregado();
    
    void setTempoDesemprego(int tempo_de_desemprego);
    int getTempoDesemprego()const;
    void setListaSkills(char* lista_skills);
    char* getListaSkills()const;

    void imprimeDesempregado();
};



#endif