/*
 * AudioBook.cpp
 *
 *  Created on: 8 de out de 2018
 *      Author: guit_
 */
#include "AudioBook.hpp"

//Audiobook :: Audiobook(set <string> escritores, string titulo, vector <string> capitulos, int anoPublicacao, string idiomaOriginal, set <string> keywords, float duracao, string formatoAudio) : Livro(escritores,titulo,capitulos,anoPublicacao,idiomaOriginal,keywords)
Audiobook :: Audiobook() : Livro()
{
	this->duracao = duracao;
	this->formatoAudio = formatoAudio;
}
Audiobook :: ~Audiobook(){}
float Audiobook :: getDuracao() const
{
	return duracao;
}
void Audiobook :: setDuracao(float duracao)
{
	this->duracao = duracao;
}
string Audiobook :: getFormatoAudio() const
{
	return formatoAudio;
}
void Audiobook :: setFormatoAudio(string formatoAudio)
{
	this->formatoAudio = formatoAudio;
}
ostream& operator << (ostream& out,const Audiobook& x)
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
	out << " | " << setfill(' ') << setw(10) << fixed << setprecision(2) << x.getDuracao();
	out << " | " << endl;
	return out;
}

