#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int i, a[10], b[10];
	
	ofstream arquivo1("valores.dcp", ios_base::binary);
	ifstream arquivo2("valores.dcp", ios_base::binary);
	
	cout << "Entrada de dados\n" << endl;
	for (i=0; i < 10; i++)
	{
		cout << "Digite o elemento " << setw(2) << i+1 << " - ";
		cin >> a[i];
	}
	
	arquivo1.write(reinterpret_cast<char*>(&a), sizeof(a));
	arquivo1.close();
	
	cout << "Saida de dados\n" << endl;
	arquivo2.read(reinterpret_cast<char*>(&b), sizeof(b));
	for (i=0; i < 10; i++)
	{
		cout << "Elemento " << setw(2) << i+1 << " = ";
		cout << b[i] << endl;
	}
	arquivo2.close();
}