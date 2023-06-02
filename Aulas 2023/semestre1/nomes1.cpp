#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char nome[5][40];
	cout << "Leitura e apresentação de nome\n\n";
	for (i=0;i<=4;i++)
	{
		cout << "Informe o " << setw(2) << i + 1 << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	for (i=0;i<=4;i++)
	{
		cout << setw(2) << i + 1 << "Nome: " << nome[i] << endl;
	}
}