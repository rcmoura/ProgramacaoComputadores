#include <iostream>
using namespace std;

// constantes para cores de texto e fundo

#define black     0 // Preto
#define blue      1 // Azul
#define green     2 // Verde
#define cyan      3 // Ciano
#define red       4 // Vermelho
#define magenta   5 // Magenta
#define brown     6 // Marron
#define lgray     7 // Cinza claro

// constantes para cores de texto

#define dgray     8 // Cinza escuro
#define lblue     9 // Azul claro
#define lgreen   10 // Verde claro
#define lcyan    11 // Ciano claro
#define lred     12 // Vermelho claro
#define lmagenta 13 // Magenta claro
#define yellow   14 // Amarelo
#define white    15 // Branco

int clear();
int background(int COR);
int text(int COR);
int normal();
int lower();
int high();

int main()
{
	clear();
  	cout << "Teste de padrao de Cores com Codigo Numerico\n\n" << endl;
	normal();
  	text(14);
  	background(1);
  	cout << "Fundo: Azul // Texto: Amarelo" << endl;
  	cout << endl;
  	
  	normal();
  	text(7);
  	background(1);
  	cout << "Fundo: Azul // Texto: Cinza claro" << endl;
  	cout << endl;
  	
  	normal();
  	text(15);
  	background(4);
  	cout << "Fundo: Vermelho // Texto: Amarelo" << endl;
  	cout << endl;
  	
  	normal();
  	text(2);
  	background(0);
  	cout << "Fundo: Preto // Texto: Verde" << endl;
  	cout << endl;
  	
  	normal();
  	text(12);
  	background(7);
  	cout << "Fundo: Cinza claro // Texto: Vermelho claro" << endl;
  	cout << endl;
  	
  	normal();
  	text(white);
  	background(brown);
  	cout << "Fundo: Marron // Texto: Branco" << endl;
  	cout << endl;

  	normal();

}

int clear()
{
  cout << "\e[2J";
}

int background(int COR)
{
  switch (COR)
    {
      case 0: cout << "\e[40m"; break; //Preto
      case 1: cout << "\e[44m"; break; //Azul
      case 2: cout << "\e[42m"; break; //Verde
      case 3: cout << "\e[46m"; break; //Ciano
      case 4: cout << "\e[41m"; break; //Vermelho
      case 5: cout << "\e[45m"; break; //Magenta
      case 6: cout << "\e[43m"; break; //Marrom
      case 7: cout << "\e[47m"; break; //Cinza claro
    }
}

int text(int COR)
{
  switch (COR)
    {

      case   0: cout << "\e[30m";   break; // Preto
      case   1: cout << "\e[34m";   break; // Azul
      case   2: cout << "\e[32m";   break; // Verde
      case   3: cout << "\e[36m";   break; // Ciano
      case   4: cout << "\e[31m";   break; // Vermelho
      case   5: cout << "\e[35m";   break; // Magenta
      case   6: cout << "\e[33m";   break; // Marrom
      case   7: cout << "\e[37m";   break; // Cinza Claro
      case   8: cout << "\e[1;30m"; break; // Cinza escuro
      case   9: cout << "\e[1;34m"; break; // Azul claro
      case  10: cout << "\e[1;32m"; break; // Verde claro
      case  11: cout << "\e[1;36m"; break; // Ciano claro
      case  12: cout << "\e[1;31m"; break; // Vermelho claro
      case  13: cout << "\e[1;35m"; break; // Magenta claro
      case  14: cout << "\e[1;33m"; break; // Amarelo
      case  15: cout << "\e[1;37m"; break; // Branco
    }
}

int normal(void)
{
  cout << "\e[0m";
}

int lower(void)
{
  cout << "\e[2m";
}

int high(void)
{
  cout << "\e[1m";
}
