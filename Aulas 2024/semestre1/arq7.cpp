#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main(void)
{
  int POS;
  int VALOR, RESP = 1;
  long TAMANHO, NR_REGS;
  cout << "\nPesquisa direta e escrita de valores" << endl;
  fstream ARQUIVO;
  ARQUIVO.open("MATINT.DBC", ios_base::in | ios_base::out | ios_base::binary);

  ARQUIVO.seekg(0, ios_base::end);
  TAMANHO = ARQUIVO.tellg();
  NR_REGS = TAMANHO / 4;

  do
    {
      cout << "Entre a posicao a ser alterada: ";
      cin >> POS;
      cout << endl;
      if (POS <= NR_REGS) {	  
        cout << "Entre o novo valor: ";
        cin >> VALOR;
        cout << endl;
        ARQUIVO.seekp((POS - 1) * sizeof(POS), ios_base::beg);
        ARQUIVO.write(reinterpret_cast<char*>(&VALOR),
          sizeof(VALOR));
        cout << "Valor " << VALOR << " na posicao " << POS  << endl; }
      else
        cout << "Posicao informada - invalida" << endl;
      cout << "\nDeseja continuar?\n\n[1] - Sim \n[2] - Nao\n\n--> ";
      cin >> RESP;
    }
  while(RESP == 1);
  ARQUIVO.close();
  return 0;
}