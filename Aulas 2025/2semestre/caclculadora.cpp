#include <iostream>
using namespace std;

int main()
{
  float A, B, R;
  int OPCAO;
  cout << "Entre o valor <A>: "; cin >> A;
  cout << "Entre o valor <B>: "; cin >> B;
  cout << endl;
  cout << "[1] - Adicao" << endl;
  cout << "[2] - Subtracao" << endl;
  cout << "[3] - Multiplicacao" << endl;
  cout << "[4] - Divisao" << endl;
  cout << endl;
  cout << "Escolha uma opcao: "; cin >> OPCAO;
  if (OPCAO == 1)
  {
    R = A + B;
  }
  if (OPCAO == 2)
  {
    R = A - B;
  }
  if (OPCAO == 3)
  {
    R = A * B;
  }
  if (OPCAO == 4)
  {
    if (B == 0)
      {
        R = 0;
      }
    else
      {
        R = A / B;
      }
  }
  cout << "\nO resultado da operacao equivale a: " ;
  cout << R << endl;
  return 0;
}