#include <iostream>
#include <cctype>
using namespace std;

int fatorial(int N);
int pausa(void);

int main(void)
{
  int X;
  cout << "\nCalculo de fatorial\n";
  cout << "\nEntre um valor inteiro: "; cin >> X;
  cout << "\nFatorial de " << X << " = a: " << fatorial(X) << endl;
  pausa();
  return 0;
}

int fatorial(int N)
{
  int I, FAT = 1;
  for (I = 1; I <= N; I++)
    FAT *= I;
  return FAT;
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