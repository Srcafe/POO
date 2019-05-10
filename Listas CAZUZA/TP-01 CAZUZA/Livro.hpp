/*
 * Livro.hpp
 *
 *  Created on: 6 de out de 2018
 *      Author: guit_
 */

#ifndef LIVRO_HPP_
#define LIVRO_HPP_
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <iterator>
#include <iomanip>
using namespace std;
class Livro
{
	set <string> escritores;
	string titulo;
	vector <string> capitulos;
	int anoPublicacao;
	string idiomaOriginal;
	set <string> keywords;

public:

	Livro();
	//Livro(set <string>, string, vector <string>, int, string, set <string>);
	virtual ~Livro();
	set <string> getEscritores() const;
	void setEscritores(set <string>);
	string getTitulo() const;
	void setTitulo(string);
	vector <string> getCapitulos() const;
	void setCapitulos(vector <string>);
	int getAnoPublicacao() const;
	void setAnoPublicacao(int);
	string getIdiomaOriginal() const;
	void setIdiomaOriginal(string);
	set <string> getKeywords() const;
	void setKeywords(set <string>);
	friend ostream& operator << (ostream&,const Livro&);

};




#endif /* LIVRO_HPP_ */
