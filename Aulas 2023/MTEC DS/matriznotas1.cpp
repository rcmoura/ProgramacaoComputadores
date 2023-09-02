#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main(void)
{
  float nota[10][4];
  int i, j;
  char letra;
  cout << "leitura e apresentacao de notas\n";
  cout << setprecision(2);
  cout << setiosflags(ios::right);
  cout << setiosflags(ios::fixed);

  // entrada das notas

  for (i = 0; i <= 9; i++)
    {
      cout << "\ninforme as notas do " << setw(2);
      cout << i + 1 << "o. aluno:\n\n";
      for (j = 0; j <= 3; j++)
        {
          cout << "nota: " << j + 1 << " = ";
          cin >> nota[i][j];
        }
    }
  cout << endl;

  // apresentacao das notas

  cout << setw(6) << "aluno";
  cout << setw(9) << "nota1";
  cout << setw(9) << "nota2";
  cout << setw(9) << "nota3";
  cout << setw(9) << "nota4";
  cout << endl;
  cout << endl;
  for (i = 0; i <= 9; i++)
    {
      cout << setw(6) << i + 1;
      for (j = 0; j <= 3; j++)
        {
          cout << setw(9) << nota[i][j];
        }
      cout << endl;
    }
  cout << "\ntecle <f> + <enter> para finalizar o programa ";
  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'f');
  return 0;
}