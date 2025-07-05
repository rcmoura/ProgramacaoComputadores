#include <iostream>
using namespace std;

int main()
{
  int CODIGO;
  cout << "Entre o codigo de acesso: "; cin >> CODIGO;
  cout << "\n";
  if (CODIGO == 1 || CODIGO == 2 || CODIGO == 3)
    {
      if (CODIGO == 1)
        cout << "Foi acionado o ccdigo: um.\n";
      if (CODIGO == 2)
        cout << "Foi acionado o ccdigo: dois.\n";
      if (CODIGO == 3)
        cout << "Foi acionado o ccdigo: tres.\n";
    }
  else
    cout << "Codigo invalido.\n";

}