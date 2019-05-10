    #include"class.hpp"
    using namespace std;

    Humano::Humano(int idade_aux,string nome_aux,string CPF_aux){
        setNome(nome_aux);
        setIdade(idade_aux);
        setCPF(CPF_aux);
    }
    string Humano::getNome()const{
        return nome;
    }
    void Humano::setNome(string nome_aux) {
        nome = nome_aux;
    }
    int Humano::getIdade()const{
        return idade;
    }
    void Humano::setIdade(int idade_aux) {
        idade = idade_aux;
    }
    string Humano::getCPF()const{
        return cpf;
    }
    void Humano::setCPF(string CPF_aux) {
        cpf = CPF_aux;
    }
    void Humano::imprimeHumano(){
        cout << "Nome: " << getNome();
        cout << "\nIdade: " << getIdade() << " anos";
        cout << "\nCPF: " << getCPF();
    }
