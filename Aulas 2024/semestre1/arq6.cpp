#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int VALOR, RESP = 1;
  ofstream ARQUIVO;
  ARQUIVO.open("MATINT.DBC", ios_base::app | ios_base::binary );
  cout << "\nCadastro sequencial de valores" << endl;
  do
    {
      cout << "\nEntre um valor: ";
      cin >> VALOR;
      ARQUIVO.write(reinterpret_cast<char*>(&VALOR), sizeof(VALOR));
      cout << "\nDeseja continuar?\n\n[1] - Sim \n[2] - Nao\n\n--> ";
      cin >> RESP;
    }
  while(RESP == 1);
  ARQUIVO.close();
  return 0;
}