/*
 * menus.hpp
 *
 *  Created on: 24 de out de 2018
 *      Author: guit_
 */
#include <iostream>
#include <iomanip>
using namespace std;
void MENU_PRINCIPAL()
{
	cout << " |                   MENU PRINCIPAL                  |" << endl;
	cout << " |                                                   |" << endl;
	cout << " |  1 - Mostrar todos os livros                      |" << endl;
	cout << " |  2 - Coleção com todos os livros de um idioma     |" << endl;
	cout << " |  3 - Coleção de livros Eletrônicos de um formato  |" << endl;
	cout << " |  4 - Coleção de livros Impressos que contenham    |" << endl;
	cout << " | uma quantidade de livrarias ou mais               |" << endl;
	cout << " |  5 - Verificar se um escritor tem um Audiobook    |" << endl;
	cout << " |  6 - Coleção com todos os livros de um título     |" << endl;
	cout << " |  7 - Mostrar todos os keywords disponíveis        |" << endl;
	cout << " |  8 - Coleção com todos os livros que contenham    |" << endl;
	cout << " | uma quantidade de capítulos ou menos              |" << endl;
	cout << " |  9 - Retornar iteradores para os livros de um     |" << endl;
	cout << " | título                                            |" << endl;
	cout << " | 10 - Mostrar todos os tipos de livros             |" << endl;
	cout << " | 11 - Mostrar quantidade de livros que possuem     |" << endl;
	cout << " | uma keyword                                       |" << endl;
	cout << " | 12 - Mapear idiomas                               |" << endl;
	cout << " |  0 - SAIR DO PROGRAMA                             |" << endl;
	cout << " |                                                   |" << endl;
	cout << " | Opção : ";

}
void cabecalhoImpressao(int especifico = 0)
{
	if(especifico == 0)
	{
		cout << " | " << setfill(' ') << setw(34) << " TÍTULO  | " << " ESCRITOR " << setw(23) << " | "  << "(Idioma/NºdeCap/Ano/NºdeKey) |"<< endl;
		cout << " | " << setfill('-') << setw(33) << " | "         << setw(33) <<                 " | " << setw(31) << " | " <<endl;
	}
	else
	{
		cout << " | " << setfill(' ') << setw(34) << " TÍTULO  | " << " ESCRITOR " << setw(23) << " | "  << "(Idioma/NºdeCap/NºdeKey/Car.Espec) |"<< endl;
		cout << " | " << setfill('-') << setw(33) << " | "         << setw(33) <<                 " | " << setw(37) << " | " <<endl;
	}
}
template <typename T> void imprimirColecaoDeLivros(T colecao, int especifico = 0)
{
	if(especifico == 0)
	{	cabecalhoImpressao();
		for(auto elem : colecao)
			cout << *elem;
		cout << endl;
	}
	else
	{
		cabecalhoImpressao(especifico);
		for(auto elem : colecao)
		{
			Impresso *p_i; Audiobook *p_a; Eletronico *p_e;
			if((p_i = dynamic_cast<Impresso*>(elem)) != nullptr)
				cout << *p_i;
			else if((p_a = dynamic_cast<Audiobook*>(elem)) != nullptr)
				cout << *p_a;
			else if((p_e = dynamic_cast<Eletronico*>(elem)) != nullptr)
				cout << *p_e;
		}
		cout << endl;
	}
}


