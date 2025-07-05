#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  float NOTA[10][4];
  int I, J;
  char LETRA;
  cout << "Leitura e apresentacao de notas\n";
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // Entrada das notas

  for (I = 0; I <= 9; I++)
    {
      cout << "\nInforme as notas do " << setw(2);
      cout << I + 1 << "o. aluno:\n\n";
      for (J = 0; J <= 3; J++)
        {
          cout << "Nota: " << J + 1 << " = ";
          cin >> NOTA[I][J];
        }
    }
  cout << endl;

  // Apresentacao das notas

  cout << setw(6) << "Aluno";
  cout << setw(9) << "Nota1";
  cout << setw(9) << "Nota2";
  cout << setw(9) << "Nota3";
  cout << setw(9) << "Nota4";
  cout << endl;
  cout << endl;
  for (I = 0; I <= 9; I++)
    {
      cout << setw(6) << I + 1;
      for (J = 0; J <= 3; J++)
        {
          cout << setw(9) << NOTA[I][J];
        }
      cout << endl;
    }
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }
  while (LETRA != 'F');
  return 0;
}