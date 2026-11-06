#include <iostream>
using namespace std;

int main()
{
  int NUMERO;
  cout << "Entre um valor: "; cin >> NUMERO;
  cout << endl;
  if (NUMERO >= 20 && NUMERO <= 90)
    cout << "O valor esta entre 20 e 90";
  else
    cout << "O valor nao esta entre 20 e 90.";
}