#include<iostream>
using namespace std;
/*************************************
*              CLASSE DATA           *
**************************************/
class Data{
    int dia;
    int mes;
    int ano;

public:
    Data(int dia=0,int mes=0,int ano=0){
        this->dia = dia;
        this->mes = mes;
        this->ano = ano;
    }
    setDia(int dia_m){
        dia = dia_m;
    }
    setMes(int mes_m){
        mes = mes_m;
    }
    setAno(int ano_m){
        ano = ano_m;
    }

    int getDia(){return dia;}
    int getMes(){return mes;}
    int getAno(){return ano;}

    void imprimeData(){
        cout << getDia() << "/" << getMes() << "/" << getAno() << endl;
    }
};

/**************************************
*              CLASSE PESSOA          *
**************************************/
class Pessoa{
    string nome;
    string endereco;
    string telefone;

public:
    Pessoa(string nome = "default",string endereco = "default",string telefone = "(00)0000-0000"){
        this->nome = nome;
        this->endereco= endereco;
        this->telefone = telefone;
    }
    setNome(string nome_m){
        nome = nome_m;
    }
    setEndereco(string endereco_m){
        endereco = endereco_m;
    }
    setTelefone(string telefone_m){
        telefone = telefone_m;
    }
    string getNome(){return nome;}
    string getEndereco(){return endereco;}
    string getTelefone(){return telefone;}

    void imprimePessoa(){
        cout <<"Nome: "<< getNome() << "\n" << "Endereco: " << getEndereco() << "\n" << "Telefone: " << getTelefone() <<"\n";
    }
};
/*************************************
*              SUBCLASSE DATA        *
**************************************/
class Empregado : public Pessoa{
    double salario;

public:
    Empregado(double salario = 0.0){
        this->salario = salario;
    }
    setSalario(double salario_m ){
        if(salario_m < 0){
            salario_m = 0.0;
        }
        salario = salario_m;
    }
    double getSalario(){return salario;}
    imprimePessoa(){
        Pessoa:: imprimePessoa();
        cout << "Salario: " << getSalario();
    }
    double salarioAnual(){
        cout << "Salario Anual: " << getSalario()*12;
        return getSalario()*12;
    }
    double getPlusSalario(int salario_m){return salario_m*1.10;}
};

int main(){
    /*************************************
    *       CRIACAO DO OBJETO DATA       *
    **************************************/
/*
    Data data_m;
    int dia_m,mes_m,ano_m;
    cout << "Digite a data: ";
    cin >> dia_m >> mes_m >> ano_m;
    data_m.setDia(dia_m);
    data_m.setMes(mes_m);
    data_m.setAno(ano_m);
    data_m.imprimeData();
*/
    /*************************************
    *       CRIACAO DO OBJETO PESSOA     *
    *************************************/
/*
    Pessoa pessoa_m;
    string nome_m,endereco_m,telefone_m;
    cout << "Digite o Nome da pessoa: ";
    cin.ignore();
    getline(cin,nome_m);
    cout << "Digite o endereco da pessoa: ";
    getline(cin,endereco_m);
    cout << "Digite o telefone da pessoa: ";
    getline(cin,telefone_m);
    pessoa_m.setNome(nome_m);
    pessoa_m.setEndereco(endereco_m);
    pessoa_m.setTelefone(telefone_m);
    pessoa_m.imprimePessoa();
*/
    /*************************************
    *   CRIACAO OBJETO Empregado         *
    *************************************/
    //empregado 01
    Empregado empregado01;
    double salario_m;
    double salarioAnual_m;
    string nome_m,endereco_m,telefone_m;
    cout << "Digite o Nome do empregado: ";
    getline(cin,nome_m);
    cout << "Digite o endereco do empregado: ";
    getline(cin,endereco_m);
    cout << "Digite o telefone do empregado: ";
    getline(cin,telefone_m);
    empregado01.setNome(nome_m);
    empregado01.setEndereco(endereco_m);
    empregado01.setTelefone(telefone_m);
    cout << "Digite o salario do empregado: ";
    cin >> salario_m;
    empregado01.setSalario(salario_m);
    empregado01.imprimePessoa();
    cout << endl;
    salarioAnual_m = empregado01.salarioAnual();
    cout << endl;
    cout << "Salario anual: " <<empregado01.getPlusSalario(salarioAnual_m);
    cout << endl;
    //empregado 2
    Empregado empregado02;
    cin.ignore();
    cout << "Digite o Nome do empregado 2: ";
    getline(cin,nome_m);
    cout << "Digite o endereco do empregado 2: ";
    getline(cin,endereco_m);
    cout << "Digite o telefone do empregado 2: ";
    getline(cin,telefone_m);
    empregado02.setNome(nome_m);
    empregado02.setEndereco(endereco_m);
    empregado02.setTelefone(telefone_m);
    cout << "Digite o salario do empregado 2: ";
    cin >> salario_m;
    cout << "endl";
    empregado02.setSalario(salario_m);
    empregado02.imprimePessoa();
    cout << endl;
    salarioAnual_m = empregado02.salarioAnual();
    cout << endl;
    cout << "Salario anual com 10%: " << empregado02.getPlusSalario(salarioAnual_m);


    return 0;
}
