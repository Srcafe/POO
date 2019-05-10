/*
 * Eletronico.hpp
 *
 *  Created on: 8 de out de 2018
 *      Author: guit_
 */

#ifndef ELETRONICO_HPP_
#define ELETRONICO_HPP_
#include "Livro.hpp"
class Eletronico : public Livro
{
	string url;
	string formatoArquivo;

public:

	Eletronico();
	//Eletronico(set <string>, string, vector <string>, int, string, set <string>, string, string);
	~Eletronico();
	string getUrl() const;
	void setUrl(string);
	string getFormatoArquivo() const;
	void setFormatoArquivo(string);
	friend ostream& operator << (ostream&,const Eletronico&);

};



#endif /* ELETRONICO_HPP_ */
