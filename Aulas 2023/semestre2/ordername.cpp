#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int i, j;
	char nome[5][40], x[40], letra;
	cout << "Leitura e apresentação de nomes ordenados\n\n";
	
	for (i = 0; i <= 4; i++)
	{
		cout << "Entre com o " << setw(2) <<  i + 1 << "o. nome = ";
		cin.getline(nome[i], sizeof(nome[i]));		
	}
	cout << endl;
	
	// classificação de valores
	for (i = 0; i <= 3; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if(strcmp(nome[i], nome[j]) > 0)
			{
				strcpy(x, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], x);
			}
		}
	}
	
	for (i = 0; i <= 4; i++)
	{
		cout << setw(2) <<  i + 1 << " Nome = " << nome[i] << endl;
	}
	
	cout << "\nTecle <E> + <ENTER> para finalizar o programa ";
	
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'E');
}	

