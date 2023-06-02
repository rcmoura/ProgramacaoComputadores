#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int i, j;
	char nome[5][40], x[40];
	cout << "Leitura e apresentacao de nomes ordernado\n\n";
	for (i=0; i<=4; i++)
	{
		cout <<"Informe o "<< setw(2) << i + 1 << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	
	// classificacao do valores
	for (i=0;i<=3;i++)
	{
		for(j = i + 1; j<=4; j++)
		{
			if (strcmp(nome[i], nome[j]) > 0)
			{
				strcpy(x,nome[i]);
				strcpy(nome[i] , nome[j]);
				strcpy(nome[j] , x);
			}
		}
	}
	
	for (i=0; i<=4; i++)
	{
		cout << setw(2) << i + 1 << "o. Nome: " << nome[i] << endl;
	}
	
}