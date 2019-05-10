/*
 * Impresso.cpp
 *
 *  Created on: 7 de out de 2018
 *      Author: guit_
 */

#include "Impresso.hpp"
//Impresso :: Impresso(set <string> escritores, string titulo, vector <string> capitulos, int anoPublicacao, string idiomaOriginal, set <string> keywords, vector <string> livrarias, int colunas) : Livro(escritores,titulo,capitulos,anoPublicacao,idiomaOriginal,keywords)
Impresso :: Impresso() : Livro()
{
	this->colunas = 0;
}
Impresso :: ~Impresso(){}
set <string> Impresso :: getLivrarias() const//colecao
{
	return livrarias;
}
void Impresso :: setLivrarias(set <string> livrarias) //colecao
{
	this->livrarias = livrarias;
}
int Impresso :: getColunas() const
{
	return colunas;
}
void Impresso :: setColunas(int colunas)
{
	this->colunas = colunas;
}
ostream& operator << (ostream& out, const Impresso& x)
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
	//key
	out << " | " << setfill('0') << setw(2) << x.getKeywords().size();
	//livrarias
	if(!x.getLivrarias().empty())
	{	str = *(x.getLivrarias().begin());
		if(str.size() > 10)
			out << " | " << str.erase(10);
		else
			out << " | " << setfill(' ') << setw(10) << str;
	}
	else
		out << " | " << setfill(' ') << setw(10) << "Nenhuma";
	out << " | " << endl;
	return out;
}

