
////////////////////////////////////////////////////////////////
//			GUILHERME FERREIRA ROCHA	17.2.4181			  //
//			PHILIPE LEMOS PARREIRA      16.2.4517			  //
//															  //
//                TRABALHO PRÁTICO 1 - P.O.O				  //
////////////////////////////////////////////////////////////////
#include "Livro.hpp"
#include "AudioBook.hpp"
#include "Eletronico.hpp"
#include "Impresso.hpp"
#include "Funcoes.hpp"
#include "menus.hpp"

int main()
{
	multiset <Livro*,function<bool(Livro*,Livro*)>> colecao(compararTitulo);
	colecao = pegarLivrosArquivo();
	bool mapeado = false;

	int opcao;
	do
	{	MENU_PRINCIPAL();
		opcao = validarEntradaNumerica();
		switch(opcao)
		{
			case 1:
				imprimirColecaoDeLivros(colecao);
				break;
			case 2:
			{	vector <Livro*> v;
				string str;
				cout << "\nIdioma desejado: ";
				cin.ignore();
				getline(cin,str);
				v = questaoB(str,colecao);
				if(!v.empty())
					imprimirColecaoDeLivros(v);
				else
					cout << "..............Idioma não encontrado..\n" << endl;
			}
				break;
			case 3:
			{	multiset <Livro*,function<bool(Livro*,Livro*)>> m;
				string str;
				cout << "\nFormato desejado: ";
				cin.ignore();
				getline(cin,str);
				m = questaoC(str,colecao);
				if(!m.empty())
					imprimirColecaoDeLivros(m);
				else
					cout << "..............Formato não encontrado..\n" << endl;
			}
				break;
			case 4:
			{
				vector <Livro*> v;
				int n;
				cout << "\nNumero de livrarias desejado: ";
				cin >> n;
				v = questaoD(n,colecao);
				if(!v.empty())
					imprimirColecaoDeLivros(v);
				else
					cout << "..............Quantidade igual ou maior de livrarias não encontrada..\n" << endl;
			}
				break;
			case 5:
			{
				string str;
				cout << "\nEscritor desejado: ";
				cin.ignore();
				getline(cin,str);
				if(questaoE(str,colecao))
					cout << "..............Escritor encontrado!..\n" << endl;
				else
					cout << "..............Escritor não encontrado..\n" << endl;
			}
				break;
			case 6:
			{
				vector <Livro*> v;
				string str;
				cout << "\nTitulo desejado: ";
				cin.ignore();
				getline(cin,str);
				v = questaoF(str,colecao);
				if(!v.empty())
					imprimirColecaoDeLivros(v);
				else
					cout << "..............Titulo não encontrado..\n" << endl;
			}
				break;
			case 7:
			{
				set <string> s = questaoG(colecao);
				if(!s.empty())
				{	int maxlinha = 1;
					for(auto elem : s)
					{	cout << elem << " ; ";
						if(maxlinha%6 == 0)
							cout << endl;
						maxlinha++;
					}
					cout << endl;
				}
				else
					cout << "..............Nenhuma keyword..\n" << endl;

			}
				break;
			case 8:
			{
				multiset <Livro*,function<bool(Livro*,Livro*)>> m;
				int n;
				cout << "\nNumero de capítulos desejado: ";
				n = validarEntradaNumerica();
				if(n == -1)
					break;
				m = questaoH(n,colecao);
				if(!m.empty())
					imprimirColecaoDeLivros(m);
				else
					cout << "..............Quantidade igual ou menor de capítulos não encontrada..\n" << endl;

			}
				break;
			case 9:
			{	multiset<Livro*,function<bool(Livro*,Livro*)>>:: iterator it_1, it_2, it_3;
				string str;
				cout << "Titulo desejado: ";
				cin.ignore();
				getline(cin,str);
				questaoI(str,it_1,it_2,it_3,colecao);
				cabecalhoImpressao(1);
				if(it_1 != colecao.end())
				{	Impresso* p_i = dynamic_cast<Impresso*>(*it_1);
					if(p_i != nullptr)
						cout << *p_i;
				}
				if(it_2 != colecao.end())
				{	Audiobook* p_a = dynamic_cast<Audiobook*>(*it_2);
					if(p_a != nullptr)
						cout << *p_a;
				}
				if(it_3 != colecao.end())
				{	Eletronico* p_e = dynamic_cast<Eletronico*>(*it_3);
					if(p_e != nullptr)
						cout << *p_e;
				}
				cout << endl;
			}
				break;
			case 10:
				imprimirColecaoDeLivros(colecao,1);
				break;
			case 11:
			{	int q = 0;
				string str;
				cout << "Keyword desejada: ";
				cin.ignore();
				getline(cin,str);
				q = questaoK(str,colecao);
				if(q>0)
					cout << "Quantidade keywords: " << q << endl;
				else
					cout << "..............Nenhuma keyword encontrada..\n" << endl;
			}
				break;
			case 12:
			{
				map <string,string> m = {pair<string,string>("Ingles","ING"),pair<string,string>("Portugues","POT"),
						pair<string,string>("Espanhol","ESP"),pair<string,string>("Frances","FRS")};
				if(!mapeado)
				{	questaoL(colecao,m);
					mapeado = true;
				}
				imprimirColecaoDeLivros(colecao);
			}
				break;
			case 0:
				cout << "............FECHANDO PROGRAMA..\n" << endl;
				break;
			default:
				cout << "............Opção Invalida..\n" << endl;
		}

	} while(opcao != 0);


	return 0;
}



