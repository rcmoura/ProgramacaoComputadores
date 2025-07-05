#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  int A[5];
  int I, SOMA = 0;
  char LETRA;
  cout << "Somatorio de elementos impares\n\n";
  cout << setiosflags(ios::right);

  // Entrada de dados

  for (I = 0; I <= 4; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2);
      cout << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento par ou impar

  for (I = 0; I <= 4; I++)
    if (A[I] % 2 != 0)
       SOMA += A[I];

  // Apresentacao das matrizes

  cout << "\n\nA soma dos elementos equivale a: " << setw(4) << SOMA;
  cout << "\n\nTecle <F> + <Enter> para finalizar o programa ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'F');
  return 0;
}