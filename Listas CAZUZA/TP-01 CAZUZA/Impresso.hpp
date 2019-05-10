/*
 * Impresso.hpp
 *
 *  Created on: 7 de out de 2018
 *      Author: guit_
 */

#ifndef IMPRESSO_HPP_
#define IMPRESSO_HPP_
#include "Livro.hpp"
class Impresso : public Livro
{
	set <string> livrarias; //colecao
	int colunas;

public:

	Impresso();
	//Impresso(set <string>, string, vector <string>, int, string, set <string>, vector <string>, int);
	~Impresso();
	set <string> getLivrarias() const; //colecao
	void setLivrarias(set <string>); //colecao
	int getColunas() const;
	void setColunas(int);
	friend ostream& operator << (ostream&, const Impresso&);
};




#endif /* IMPRESSO_HPP_ */
