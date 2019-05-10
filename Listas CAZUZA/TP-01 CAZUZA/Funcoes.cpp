/*
 * Funcoes.cpp
 *
 *  Created on: 17 de out de 2018
 *      Author: guit_
 */
#include "Funcoes.hpp"
template <typename T> void split1(const string& str, T& cont, char delim = ';')
{
	stringstream ss(str);
	string token;
	while (getline(ss,token,delim))
		cont.push_back(token);
}
template <typename T2> void split2(const string& str, T2& cont, char delim = ';')
{
	stringstream ss(str);
	string token;
	while (getline(ss,token,delim))
		cont.insert(token);
}
int validarEntradaNumerica()
{
    int n;
    try
    {
        char erro = 'a';
        cin >> n;
        if(!cin)    //SE A ENTRADA FOR NUMERICA
            throw erro;

    }
    catch(...)
    {
        cin.clear();//LIMPA A ENTRADA
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return -1;
    }
    return n;//SE ESTIVER RETORNA O FORMATO
}
bool compararTitulo(Livro* l1,Livro* l2)
{
	return l1->getTitulo() < l2->getTitulo();
}
bool compararAno(Livro* l1,Livro* l2)
{
	return l1->getAnoPublicacao() < l2->getAnoPublicacao();
}
bool compararEscritor(Livro* l1, Livro* l2)
{
	return *(l1->getEscritores().begin()) < *(l2->getEscritores().begin());
}
multiset <Livro*,function<bool(Livro*,Livro*)>> pegarLivrosArquivo()
{
	multiset <Livro*,function<bool(Livro*,Livro*)>> colecao(compararTitulo);
	string arqnomes[16] = { "1.txt", "2.txt",  "3.txt", "4.txt", "5.txt", "6.txt", "7.txt", "8.txt", "9.txt", "10.txt", "11.txt", "12.txt", "13.txt", "14.txt", "15.txt", "16.txt" };
	//ifstream p_arq;


	for(int i = 0 ; i < 16 ; i++)
	{
		ifstream p_arq;
		p_arq.open(arqnomes[i]);
		//Livro liv;
		int tipo;
		string aux;
		set <string> aux2;
		vector <string> aux3;
		int aux4;
		float aux5;
		getline(p_arq,aux);
		tipo = stoi(aux);

		switch(tipo)
		{
			case 1: //Impresso
			{	Impresso *imp = new Impresso;
				//titulo
				getline(p_arq,aux);
				imp->setTitulo(aux);
				//escritores
				getline(p_arq,aux);
				split2(aux,aux2);
				imp->setEscritores(aux2);
				aux2.clear();
				//ano
				getline(p_arq,aux);
				aux4 = stoi(aux);
				imp->setAnoPublicacao(aux4);
				//idioma
				getline(p_arq,aux);
				imp->setIdiomaOriginal(aux);
				//keywords
				getline(p_arq,aux);
				split2(aux,aux2);
				imp->setKeywords(aux2);
				aux2.clear();
				//capitulos
				getline(p_arq,aux);
				split1(aux,aux3);
				imp->setCapitulos(aux3);
				aux3.clear();
				//livrarias
				getline(p_arq,aux);
				split2(aux,aux2);
				imp->setLivrarias(aux2);
				aux2.clear();
				//colunas
				getline(p_arq,aux);
				aux4 = stoi(aux);
				imp->setColunas(aux4);

				colecao.insert(imp);
				break;
			}
			case 2: //Eletronico
			{	Eletronico *elet = new Eletronico;
				//titulo
				getline(p_arq,aux);
				elet->setTitulo(aux);
				//escritores
				getline(p_arq,aux);
				split2(aux,aux2);
				elet->setEscritores(aux2);
				aux2.clear();
				//ano
				getline(p_arq,aux);
				aux4 = stoi(aux);
				elet->setAnoPublicacao(aux4);
				//idioma
				getline(p_arq,aux);
				elet->setIdiomaOriginal(aux);
				//keywords
				getline(p_arq,aux);
				split2(aux,aux2);
				elet->setKeywords(aux2);
				aux2.clear();
				//capitulos
				getline(p_arq,aux);
				split1(aux,aux3);
				elet->setCapitulos(aux3);
				aux3.clear();
				//url
				getline(p_arq,aux);
				elet->setUrl(aux);
				//formato
				getline(p_arq,aux);
				elet->setFormatoArquivo(aux);

				colecao.insert(elet);
				break;
			}
			case 3: //Audiobook
			{	Audiobook* ab = new Audiobook;
				//titulo
				getline(p_arq,aux);
				ab->setTitulo(aux);
				//escritores
				getline(p_arq,aux);
				split2(aux,aux2);
				ab->setEscritores(aux2);
				aux2.clear();
				//ano
				getline(p_arq,aux);
				aux4 = stoi(aux);
				ab->setAnoPublicacao(aux4);
				//idioma
				getline(p_arq,aux);
				ab->setIdiomaOriginal(aux);
				//keywords
				getline(p_arq,aux);
				split2(aux,aux2);
				ab->setKeywords(aux2);
				aux2.clear();
				//capitulos
				getline(p_arq,aux);
				split1(aux,aux3);
				ab->setCapitulos(aux3);
				aux3.clear();
				//duracao
				getline(p_arq,aux);
				aux5 = stod(aux);
				ab->setDuracao(aux5);
				//formato
				getline(p_arq,aux);
				ab->setFormatoAudio(aux);

				colecao.insert(ab);
				break;
			}

		}
		aux2.clear();aux3.clear();

		p_arq.close();
	}

	return colecao;
}
// 2 - Coleção com todos os livros de um idioma
vector <Livro*> questaoB(const string idioma,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{
	vector <Livro*> v(colecao.size()); //criar um vector do tamanho da colecao
	//copia um livro de colecao para v se o idioma for o mesmo
	auto it = copy_if(colecao.begin(),colecao.end(),v.begin(),[&idioma](Livro* l){return idioma == l->getIdiomaOriginal();});
	v.resize(distance(v.begin(),it)); //ajusta o tamanho do vetor

	return v;
}
// 3 - Coleção de livros Eletrônicos de um formato
multiset <Livro*,function<bool(Livro*,Livro*)>>
     questaoC(const string formato,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{
	multiset <Livro*,function<bool(Livro*,Livro*)>> m(compararAno);

	for(auto elem : colecao)
	{
		Eletronico *p_e;
		p_e = dynamic_cast<Eletronico*>(elem);
		if(p_e != nullptr) //se o dawncast suceder ele pode comparar o formato
		{	if(p_e->getFormatoArquivo() == formato)
				m.insert(p_e);
		}
	}
	return m;
}
// 4 - Coleção de livros Impressos que contenham uma quantidade de livrarias ou mais
vector <Livro*> questaoD(unsigned int quant,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{
	vector <Livro*> v;

	for(auto elem : colecao)
	{
		Impresso* p_i;
		p_i = dynamic_cast<Impresso*>(elem);
		if( p_i != nullptr ) //se o dawncast suceder pode realizar a comparaçao da quantidade de livrarias
		{
			if(p_i->getLivrarias().size() >= quant)
				v.push_back(p_i);
		}
	}

	return v;
}
// 5 - Verificar se um escritor tem um Audiobook
bool questaoE(string escritor,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao) //questao E
{
	for(auto elem : colecao)
	{
		Audiobook *p_a;

		if( ( p_a = dynamic_cast<Audiobook*>(elem) )!= nullptr ) //se o dawncast suceder podem ser comparados os escritores
		{
			for(auto aux : p_a->getEscritores())
			{
				if(aux == escritor)
					return true;
			}
		}
	}
	return false;
}
// 6 - Coleção com todos os livros de um título
vector <Livro*> questaoF(string titulo, multiset<Livro*,function<bool(Livro*,Livro*)>> colecao) // questao F
{
	vector <Livro*> v(colecao.size()); // cria um vector do tamanho da colecao
	//copia um livro de colecao para v se o titulo for o mesmo
	auto it = copy_if(colecao.begin(),colecao.end(),v.begin(),[&titulo](Livro* l){return titulo == l->getTitulo();});
	v.resize(distance(v.begin(),it)); // ajusta o tamanho do vector

	return v;
}
// 7 - Mostrar todos os keywords disponíveis
set <string> questaoG(multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{
	set <string> s;

	for(auto elem : colecao)
	{
		for(auto aux : elem->getKeywords()) //insere todas as keywords num set(ou seja sem repetiçao)
			s.insert(aux);
	}

	return s;
}
// 8 - Coleção com todos os livros que contenham uma quantidade de capítulos ou menos
multiset <Livro*,function<bool(Livro*,Livro*)>>
		    questaoH(unsigned int quant,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{
	multiset <Livro*,function<bool(Livro*,Livro*)>> m(compararEscritor);

	for(auto elem : colecao)
	{
		if(elem->getCapitulos().size() <= quant)
			m.insert(elem);
	}

	return m;
}
// 9 -
void            questaoI(const string titulo, multiset<Livro*,function<bool(Livro*,Livro*)>> :: iterator& it_1,
		multiset<Livro*,function<bool(Livro*,Livro*)>>:: iterator& it_2,
		multiset<Livro*,function<bool(Livro*,Livro*)>>::iterator& it_3,multiset<Livro*,function<bool(Livro*,Livro*)>>& colecao)
{
	it_1 = find_if(colecao.begin(),colecao.end(),
			[&titulo](Livro* l){ return ((titulo == l->getTitulo()) && (dynamic_cast<Impresso*>(l)!=nullptr));});
	it_2 = find_if(colecao.begin(),colecao.end(),
			[&titulo](Livro* l){ return ((titulo == l->getTitulo()) && (dynamic_cast<Audiobook*>(l)!=nullptr));});
	it_3 = find_if(colecao.begin(),colecao.end(),
			[&titulo](Livro* l){ return ((titulo == l->getTitulo()) && (dynamic_cast<Eletronico*>(l)!=nullptr));});
}
// 11 - Mostrar quantidade de livros que possuem uma keyword
int questaoK(const string key ,multiset<Livro*,function<bool(Livro*,Livro*)>> colecao)
{	int cont = 0;
	for(auto elem : colecao)
	{
		for(auto aux : elem->getKeywords())
		{
			if(key == aux) //incrementa o contar se achar um keyword igual
				cont++;
		}
	}
	return cont;
}
// 12 - Mapear Idiomas
void questaoL(multiset<Livro*,function<bool(Livro*,Livro*)>> colecao,map<string,string> &mapaIdioma)
{
	//para cada livro da colecao, o idioma é susbstituido pelo seu par no mapeamento
	for_each(colecao.begin(),colecao.end(),[&mapaIdioma](Livro* l){l->setIdiomaOriginal(mapaIdioma[l->getIdiomaOriginal()]);});
}



