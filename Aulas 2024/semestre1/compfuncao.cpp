// C05EX06.CPP
// Verificacao Logica

#include <iostream>
#include <cctype>
using namespace std;

bool compara(int A, int B);
int pausa(void);

int main(void)
{
  int N1, N2;
  cout << "\nVerificao Logica\n";
  cout << "\nEntre o 1o. Numero: "; cin >> N1;
  cout << "\nEntre o 2o. Numero: "; cin >> N2;
  if (compara(N1, N2))
    cout << "\nOs numeros sao iguais\n";
  else
    cout << "\nOs numeros sao diferentes\n";
  pausa();
  return 0;
}

bool compara(int A, int B)
{
  bool RESULTADO;
  RESULTADO = (A == B);
  return RESULTADO;
}

int pausa(void)
{
  char LETRA;
  cout << "\n";
  cout << "Tecle <C> + <Enter> para finalizar...";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'C');
  return 0;
}