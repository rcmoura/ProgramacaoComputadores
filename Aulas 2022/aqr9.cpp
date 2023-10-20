#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int valor, resp = 1;
  ofstream arquivo;
  arquivo.open("matint.dbc", ios_base::app | ios_base::binary );
  cout << "\nCadastro sequencial de valores" << endl;
  do
    {
      cout << "\nEntre um valor: ";
      cin >> valor;
      arquivo.write(reinterpret_cast<char*>(&valor), sizeof(valor));
      cout << "\ndeseja continuar?\n\n[1] - sim \n[2] - nao\n\n--> ";
      cin >> resp;
    }
  while(resp == 1);
  arquivo.close();
  return 0;
}