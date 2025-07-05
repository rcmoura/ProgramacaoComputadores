#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float r, a, b;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
int entrada(void);
int saida(void);
int pausa(void);

int main(void)
{
  int opcao = 0;
  while (opcao != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::right);
      cout << setiosflags(ios::fixed);
      cout << "\n";
      cout << "--------------------" << endl;
      cout << "programa calculadora" << endl;
      cout << "   menu principal   " << endl;
      cout << "--------------------" << endl;
      cout << "\n";
      cout << "[1] - adicao" << endl;
      cout << "[2] - subtracao" << endl;
      cout << "[3] - multiplicacao" << endl;
      cout << "[4] - divisao" << endl;
      cout << "[5] - fim de programa" << endl;
      cout << "\n";
      cout << "escolha uma opcao: "; cin >> opcao;
      if (opcao != 5)
        {
          switch (opcao)
            {
              case  1: rotadicao();        break;
              case  2: rotsubtracao();     break;
              case  3: rotmultiplicacao(); break;
              case  4: rotdivisao();       break;
            }
        }
    }
    return 0;
}

int entrada(void)
{
  cout << "\n";
  cout << "Entre um valor para a variavel [a]: "; cin >> a;
  cout << "Entre um valor para a variavel [b]: "; cin >> b;
  return 0;
}

int saida(void)
{
  cout << "\n";
  cout << "O resultado entre a e b = " << setw(8);
  cout << r << endl;
  pausa();
  return 0;
}

int rotadicao(void)
{
  cout << "\n";
  cout << "Rotina de adicao" << endl;
  cout << "----------------" << endl;
  entrada();
  r = a + b;
  saida();
  return 0;
}

int rotsubtracao(void)
{
  cout << "\n";
  cout << "Rotina de subtracao" << endl;
  cout << "-------------------" << endl;
  entrada();
  r = a - b;
  saida();
  return 0;
}

int rotmultiplicacao(void)
{
  cout << "\n";
  cout << "Rotina de multiplicacao" << endl;
  cout << "-----------------------" << endl;
  entrada();
  r = a * b;
  saida();
  return 0;
}

int rotdivisao(void)
{
  cout << "\n";
  cout << "Rotina de divisao" << endl;
  cout << "-----------------" << endl;
  entrada();
  if (b == 0)
    {
      cout << "\n";
      cout << "Rrro de divisao" << endl;
      pausa();
    }
  else
    {
      r = a / b;
      saida();
    }
  return 0;
}

int pausa(void)
{
  char letra;
  cout << "\n
  cout << "tecle <c> + <enter> para voltar ao menu... ";
  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'P');
  return 0;
}
