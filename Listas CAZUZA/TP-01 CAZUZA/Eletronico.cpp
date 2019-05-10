/*
 * Eletronico.cpp
 *
 *  Created on: 8 de out de 2018
 *      Author: guit_
 */
#include "Eletronico.hpp"

//Eletronico :: Eletronico(set <string> escritores, string titulo, vector <string> capitulos, int anoPublicacao, string idiomaOriginal, set <string> keywords, string url, string formatoArquivo) : Livro(escritores,titulo,capitulos,anoPublicacao,idiomaOriginal,keywords)
Eletronico :: Eletronico() : Livro()
{
	this->url = "\0";
	this->formatoArquivo = "\0";
}
Eletronico :: ~Eletronico(){}
string Eletronico :: getUrl() const
{
	return url;
}
void Eletronico :: setUrl(string url)
{
	this->url = url;
}
string Eletronico :: getFormatoArquivo() const
{
	return formatoArquivo;
}
void Eletronico :: setFormatoArquivo(string formatoArquivo)
{
	this->formatoArquivo = formatoArquivo;
}
ostream& operator << (ostream& out,const Eletronico& x)
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
	//f.arquivo
	out << " | " << setfill(' ') << setw(10) << x.getFormatoArquivo();
	out << " | " << endl;
	return out;
}


