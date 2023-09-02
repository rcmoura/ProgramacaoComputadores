// extra4.cpp
// Limpeza de linha

#include <iostream>
#include <windows.h>
using namespace std;

void position(int LINHA, int COLUNA)
{
  HANDLE TELA;
  COORD POS;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  POS.X = COLUNA - 1;
  POS.Y = LINHA - 1;
  SetConsoleCursorPosition(TELA, POS);
  return;
}

void clearline(void)
{
  HANDLE TELA;
  COORD POS;
  CONSOLE_SCREEN_BUFFER_INFO VIDEO;
  DWORD ESCRITA = 0;
  TELA = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(TELA, &VIDEO);
  POS.Y = VIDEO.dwCursorPosition.Y;
  POS.X = VIDEO.dwCursorPosition.X;
  FillConsoleOutputCharacter(TELA, 32, 80 - POS.X , POS, &ESCRITA);
  return;
}

int main(void)
{
  position(10, 20);
  cout << "Teste 1" << endl;
  position(11, 1);
  cout << "Teste 2" << endl;
  position(10, 23);
  clearline();
  cout << endl;
  cout << endl;
  system("Pause");
}
