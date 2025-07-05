#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  int A[5], I, J, X;
  char LETRA;
  cout << "Leitura e apresentacao ordenada de valores\n\n";

  // Entrada dos valores

  for (I = 0; I <= 4; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. valor = ";
      cin >> A[I];
    }
  cout << endl;

  // Classificacao dos valores

  for (I = 0; I <= 3; I++)
    for (J = I + 1; J <= 4; J++)
      if (A[I] > A[J])
        {
			
          X = A[I];
          A[I] = A[J];
          A[J] = X;
        }

  // Apresentacao dos valores

  for (I = 0; I <= 4; I++)
    cout << setw(2) << I + 1 << "o. valor = " << A[I] << endl;
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'F');
  return 0;
}