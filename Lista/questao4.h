#ifndef QUESTAO4_H
#define QUESTAO4_H
#include <iostream>
#include <cstdlib>
using namespace std;

class NumeroRacional
{
private:
    double num,den;
public:
    NumeroRacional();
    NumeroRacional(double num, double den);
    ~NumeroRacional();


    //Sobrecarga de operadores
    NumeroRacional operator+(const NumeroRacional&) const; // Soma
    NumeroRacional operator-(const NumeroRacional&) const;// Subtração
    NumeroRacional operator*(const NumeroRacional&) const;
    NumeroRacional operator/(const NumeroRacional&) const;
    NumeroRacional& operator=(const NumeroRacional&); // atribuição

    //Sobrecarga de operadores de saida
    friend ostream& operator<<(ostream&, const NumeroRacional&);
    friend istream& operator>>(istream&, NumeroRacional&);
    double getNum() const;
    void setNum(double value);
    double getDen() const;
    void setDen(double value);
};

#endif // QUESTAO4_H
