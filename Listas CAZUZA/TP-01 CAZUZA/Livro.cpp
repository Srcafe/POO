/*
 * Livro.cpp
 *
 *  Created on: 6 de out de 2018
 *      Author: guit_
 */
#include "Livro.hpp"
//Livro :: Livro(set <string> escritores, string titulo, vector <string> capitulos, int anoPublicacao, string idiomaOriginal, set <string> keywords)
Livro :: Livro()
{
	this->titulo = "\0";
	this->anoPublicacao = 0;
	this-> idiomaOriginal = "\0";

}
Livro :: ~Livro(){}
set <string> Livro :: getEscritores() const//colecao
{
	return escritores;
}
void Livro :: setEscritores(set <string> escritores) //colecao
{
	this->escritores = escritores;
}
string Livro :: getTitulo() const
{
	return titulo;
}
void Livro :: setTitulo(string titulo)
{
	this->titulo = titulo;
}
vector <string> Livro :: getCapitulos() const //colecao
{
	return capitulos;
}
void Livro :: setCapitulos(vector <string> capitulos) //colecao
{
	this->capitulos = capitulos;
}
int Livro :: getAnoPublicacao() const
{
	return anoPublicacao;
}
void Livro :: setAnoPublicacao(int anoPublicacao)
{
	this->anoPublicacao = anoPublicacao;
}
string Livro :: getIdiomaOriginal() const
{
	return idiomaOriginal;
}
void Livro :: setIdiomaOriginal(string idiomaOriginal)
{
	this->idiomaOriginal = idiomaOriginal;
}
set <string> Livro :: getKeywords() const
{
	return keywords;
}
void Livro :: setKeywords(set <string> keywords)
{
	this->keywords = keywords;
}
ostream& operator << (ostream& out,const Livro& x)
{
	//titulo
	if(x.getTitulo().size() > 30)
		out << " | " << x.getTitulo().erase(30);
	else
		out << " | " << setfill(' ') << setw(30) << x.getTitulo();
	//escritor
	string str = *(x.getEscritores().begin());
	if(str.size() > 30)
		out << " | " << str.erase(30);
	else
		out << " | "  << str << setfill(' ') << setw(30-str.size()) << " ";
	//idioma
	if(x.getIdiomaOriginal().size() > 10)
		out << " | " << x.getIdiomaOriginal().erase(10);
	else
		out << " | " << setfill(' ') << setw(10) << x.getIdiomaOriginal();
	//capitulos
	out << " | " << setfill('0') << setw(3) << x.getCapitulos().size();
	//ano
	out << " | " << setfill('0') << setw(4) << x.getAnoPublicacao();
	//key
	out << " | " << setfill('0') << setw(2) << x.getKeywords().size();
	out << " | " << endl;
	return out;
}


