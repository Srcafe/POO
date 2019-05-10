#include "questao4.h"



double NumeroRacional::getNum() const
{
    return num;
}

void NumeroRacional::setNum(double value)
{
    num = value;
}

double NumeroRacional::getDen() const
{
    return den;
}

void NumeroRacional::setDen(double value)
{
    den = value;
}


NumeroRacional::NumeroRacional()
{
    this->num = 0.0;
    this->den = 0.0;
}

NumeroRacional::NumeroRacional(double num, double den)
{
    setNum(num);
    setDen(den);

}

NumeroRacional:: ~NumeroRacional(){}




NumeroRacional NumeroRacional::operator+(const NumeroRacional &temp) const
{
    NumeroRacional aux;
    aux.num = this->num + temp.num;
    aux.den = this->den + temp.den;

    return aux;

}

NumeroRacional NumeroRacional::operator-(const NumeroRacional &temp) const
{
    NumeroRacional aux;
    aux.num = this->num - temp.num;
    aux.den = this->den - temp.den;

    return aux;

}

NumeroRacional NumeroRacional::operator*(const NumeroRacional &temp) const
{
    NumeroRacional aux;
    aux.num = this->num * temp.num;
    aux.den = this->den * temp.den;
    return aux;

}

NumeroRacional NumeroRacional::operator/(const NumeroRacional &temp) const
{
    NumeroRacional aux;
    aux.num = this->num / temp.num;
    aux.den = this->den / temp.den;
    return aux;

}
//Sobrecarga da saída
ostream& operator<<(ostream& out, const NumeroRacional& temp)
{
    out<<temp.num<<", "<<temp.den<<"\n";
    return out;
}
istream& operator>>(istream& in, NumeroRacional& temp)
{
    in>>temp.num>>temp.den;
    return in;
}

NumeroRacional &NumeroRacional::operator=(const NumeroRacional &temp)
{
    if(this == &temp){
        return *this;
    }
    this->num = temp.num;
    this->den = temp.den;

    return *this;
}
