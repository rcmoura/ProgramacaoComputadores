#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int pos;
	int valor, resp;
	long tamanho, nr_regs;
	resp = 1;
	cout << "\nPesquisa direta e escrita de valores" << endl;
	fstream arquivo;
	arquivo.open("matint.dbc", ios_base::in | ios_base::out | ios_base::binary);
	
	arquivo.seekg(0, ios_base::end);
	tamanho = arquivo.tellg();
	nr_regs = tamanho / 4;
	
	do
	{
		cout << "Entre com a posicao a ser alterada: ";
		cin >> pos;
		cout << endl;
		if (pos <= nr_regs)
		{
			cout << "Entre com o novo valor: ";
			cin >> valor;
			cout << endl;
			arquivo.seekp((pos-1)* sizeof(pos), ios_base::beg);
			arquivo.write(reinterpret_cast<char*>(&valor), sizeof(valor));
			cout << "Valor " <<valor<<" na posicao "<<pos<<endl;
		}
		else
		{
			cout << "Posicao informada - invalida" << endl;
			cout << "\nDeseja continuar?\n\n[1] - Sim \n[2] - Nao\n\n--> ";
			cin >> resp;			
		}
	 
	}
	while (resp==1);
	arquivo.close(); 
}