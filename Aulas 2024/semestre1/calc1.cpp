#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float R, A, B;

int rotadicao(void);
int rotsubtracao(void);
int rotmultiplicacao(void);
int rotdivisao(void);
int pausa(void);

int main(void)
{
  int OPCAO = 0;
  while (OPCAO != 5)
    {
      cout << setprecision(2);
      cout << setiosflags(ios::right);
      cout << setiosflags(ios::fixed);
      cout << "\n\n";
      cout << "--------------------" << endl;
      cout << "Programa Calculadora" << endl;
      cout << "   Menu Principal   " << endl;
      cout << "--------------------" << endl;
      cout << "\n";
      cout << "[1] - Adicao" << endl;
      cout << "[2] - Subtracao" << endl;
      cout << "[3] - Multiplicacao" << endl;
      cout << "[4] - Divisao" << endl;
      cout << "[5] - Fim de Programa" << endl;
      cout << "\n";
      cout << "Escolha uma opcao: "; cin >> OPCAO;
      if (OPCAO != 5)
        {
          switch (OPCAO)
            {
              case 1: rotadicao();        break;
              case 2: rotsubtracao();     break;
              case 3: rotmultiplicacao(); break;
              case 4: rotdivisao();       break;
            }
        }
    }
  return 0;
}

int rotadicao(void)
{
  cout << "\n";
  cout << "Rotina de Adicao" << endl;
  cout << "----------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  R = A + B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
  return 0;
}

int rotsubtracao(void)
{
  cout << "\n";
  cout << "Rotina de Subtracao" << endl;
  cout << "-------------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  R = A - B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
  return 0;
}

int rotmultiplicacao(void)
{
  cout << "\n";
  cout << "Rotina de Multiplicacao" << endl;
  cout << "-----------------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  R = A * B;
  cout << "\n";
  cout << "O resultado entre A e B = " << setw(8);
  cout << R << endl;
  pausa();
  return 0;
}
int rotdivisao(void)
{
  cout << "\n";
  cout << "Rotina de Divisao" << endl;
  cout << "-----------------" << endl;
  cout << "\n";
  cout << "Entre um valor para a variavel [A]: "; cin >> A;
  cout << "Entre um valor para a variavel [B]: "; cin >> B;
  if (B == 0)
    {
      cout << "\n";
      cout << "Erro de divisao" << endl;
    }
  else
    {
      R = A / B;
      cout << "\n";
      cout << "O resultado entre A e B = " << setw(8);
      cout << R << endl;
    }
  pausa();
  return 0;
}

int pausa(void)
{
  char LETRA;
  cout << "\n";
  cout << "Tecle <C> + <Enter> para voltar ao menu... ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'C');
  return 0;
}