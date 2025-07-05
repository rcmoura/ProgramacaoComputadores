#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  int A[10], B[10];
  int I;
  char LETRA;
  cout << setiosflags(ios::right);
  cout << "Exemplo de checagem de indice\n\n";

  // Entrada de dados

  for (I = 0; I <= 9; I++)
    {
      cout << "Informe um valor para o elemento nr. " << setw(2);
      cout << I + 1 << ": ";
      cin >> A[I];
    }

  // Processamento par ou impar

  for (I = 0; I <= 9; I++)
    if (I % 2 == 0) 
      B[I] = A[I] * 5;
    else
      B[I] = A[I] + 5;

  // Apresentacao das matrizes

  for (I = 0; I <= 9; I++)
    cout << "\nA[" << setw(2) << I  << "] = " << setw(3) << A[I];
  cout << endl;
  for (I = 0; I <= 9; I++)
    cout << "\nB[" << setw(2) << I  << "] = " << setw(3) << B[I];
  cout << endl;
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'F');
  return 0;
}