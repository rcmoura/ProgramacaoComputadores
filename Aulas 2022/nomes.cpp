#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char nome[4][40],letra;
	
	cout << "Leitura e apresentacao dos nomes\n\n";
	
	// Entrada dos nomes
	
	for (i=0;i<=4;i++)
	{
		cout << "Informe o "<< setw(2) << i + 1 << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	
	// Apresentação da notas
	
		for (i=0;i<=4;i++)
	{
		cout << setw(2) << i + 1 << " Nome : " << nome[i] << endl;
	}
	cout << endl;
	cout << "\nTecle <F> + <Enter> para finalizar o programa ";

  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'F');

	
}