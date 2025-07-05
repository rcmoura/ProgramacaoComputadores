#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  float NOTA[10][4];
  int I, J;
  char letra;
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

  for (I = 0; I <= 9; I++)
    {
      cout << "\n\nAs notas do " << setw(2);
      cout << I + 1 << "o. aluno sao:\n";
      for (J = 0; J <= 3; J++)
        {
          cout << "\nNota: " << J + 1 << " = " << setw(8);
          cout << NOTA[I][J];
        }
    }
  cout << endl;
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";

  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'F');
  return 0;
}