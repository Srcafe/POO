#ifndef QUESTAO1_H
#define QUESTAO1_H


class Data
{
private:
    int dia, mes, ano;
public:
    Data(int dia, int mes, int ano);
    ~Data();

    int getDia() const;
    void setDia(int value);
    int getMes() const;
    void setMes(int value);
    int getAno() const;
    void setAno(int value);

    void exibeData();
};

#endif // QUESTAO1_H
