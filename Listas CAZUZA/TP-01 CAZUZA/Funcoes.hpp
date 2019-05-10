/*
 * Funcoes.hpp
 *
 *  Created on: 17 de out de 2018
 *      Author: guit_
 */

#ifndef FUNCOES_HPP_
#define FUNCOES_HPP_
#include <string>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <iterator>
#include <map>
#include <functional>
#include <algorithm>
#include "Livro.hpp"
#include "AudioBook.hpp"
#include "Eletronico.hpp"
#include "Impresso.hpp"
using namespace std;
int validarEntradaNumerica();
bool compararTitulo(Livro*,Livro*);
bool compararAno(Livro*,Livro*);
bool compararEscritor(Livro*, Livro*);
multiset <Livro*,function<bool(Livro*,Livro*)>> pegarLivrosArquivo();

//questoes
vector <Livro*> questaoB(const string,multiset<Livro*,function<bool(Livro*,Livro*)>>);
multiset <Livro*,function<bool(Livro*,Livro*)>>
		        questaoC(const string,multiset<Livro*,function<bool(Livro*,Livro*)>>);
vector <Livro*> questaoD(unsigned int,multiset<Livro*,function<bool(Livro*,Livro*)>>);
bool            questaoE(string,multiset<Livro*,function<bool(Livro*,Livro*)>>);
vector <Livro*> questaoF(string,multiset<Livro*,function<bool(Livro*,Livro*)>>);
set <string>    questaoG(multiset<Livro*,function<bool(Livro*,Livro*)>>);
multiset <Livro*,function<bool(Livro*,Livro*)>>
		        questaoH(unsigned int,multiset<Livro*,function<bool(Livro*,Livro*)>>);
void            questaoI(const string titulo,multiset<Livro*,function<bool(Livro*,Livro*)>> :: iterator&,
		multiset<Livro*,function<bool(Livro*,Livro*)>>:: iterator&,
		multiset<Livro*,function<bool(Livro*,Livro*)>>::iterator&,multiset<Livro*,function<bool(Livro*,Livro*)>>&);
int             questaoK(const string,multiset<Livro*,function<bool(Livro*,Livro*)>>);
void            questaoL(multiset<Livro*,function<bool(Livro*,Livro*)>>, map<string,string> &);
#endif /* FUNCOES_HPP_ */
