#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char nome[10][40], letra;
	cout << "Leitura e apresentacao de nomes\n\n";
	
	// Entrada de nomes
	
	for (i = 0; i <= 9; i++)
	{
		cout << "Infome o " << setw(2) << i + 1 << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	
	// Apresentação dos Nomes
	
	for (i = 0; i <= 9; i++)
	{
		cout << setw(2) << i + 1 << "o. nome: " << nome[i] << endl;
	}
	
	cout << "\nTecle <E> + <ENTER> para finalizar o programa ";
	
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'E');
}	

