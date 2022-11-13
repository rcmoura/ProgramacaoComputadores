#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int i, j ;
	char letra, x[40], nome[5][40];
	
	cout << "Leitura e apresentacao ordernada de valores\n\n";
	
	// Entrada dos nomes
	
	for (i=1;i<=5;i++)
	{
		cout << "Informe o "<< setw(2) << i  << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	
	// Classificação dos valores - técnica de bolha
	
	for (i=1;i<=5;i++)
	{
		for (j=i+1; j<=6; j++)
		{
			if (strcmp(nome[i],nome[j]) > 0)
			{
				strcpy(x, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], x);
			}
		}
	}
	
	// Apresentação da notas
	
	for (i=1;i<=5;i++)
	{
		cout << setw(2) << i  << " Nome : " << nome[i] << endl;
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