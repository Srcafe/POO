/*
 * AudioBook.hpp
 *
 *  Created on: 8 de out de 2018
 *      Author: guit_
 */

#ifndef AUDIOBOOK_HPP_
#define AUDIOBOOK_HPP_
#include "Livro.hpp"
class Audiobook : public Livro
{
	float duracao;
	string formatoAudio;

public:

	Audiobook();
	//Audiobook(set <string>, string, vector <string>, int, string, set <string>, float, string);
	~Audiobook();
	float getDuracao() const;
	void setDuracao(float);
	string getFormatoAudio() const;
	void setFormatoAudio(string);
	friend ostream& operator << (ostream&,const Audiobook&);
};




#endif /* AUDIOBOOK_HPP_ */
