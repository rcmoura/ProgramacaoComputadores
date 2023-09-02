// extra1.cpp
// Definicao de cores

#include <iostream>
#include <windows.h>
using namespace std;

int main(void)
{
  HANDLE TELA;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  int COR;

  for(COR = 0; COR <= 255; COR++)
    {
      SetConsoleTextAttribute(TELA, COR);
      cout << "Cor numero = " << COR << endl;
    }
  SetConsoleTextAttribute(TELA, 15);

  system("Pause");
}
