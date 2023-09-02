// extra2.cpp
// Definicao de cores

#include <iostream>
#include <windows.h>
using namespace std;

void clear(void)
{
  HANDLE TELA;
  DWORD ESCRITA = 0;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = 0;
  POS.Y = 0;
  FillConsoleOutputCharacter(TELA, 32, 80 * 25, POS, &ESCRITA);
  return;
}

int main( void )
{
  clear();
  cout << "Teste 1" << endl;
  clear();
  cout << "Teste 2" << endl;
  system("Pause");
}
