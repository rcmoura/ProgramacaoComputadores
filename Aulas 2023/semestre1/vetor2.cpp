#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int a[10], b[10];
	int i, resto;
	char letra;
	cout << "Exemplo de checagem de indice\n\n";
	
	// Entrada de dados
	
	for (i=0;i<=9;i++)
	{
		cout << "Informe o valor para o Elemento A-> ";
		cin >> a[i];
	}
	
	// Processamento par ou impar
	for (i=0;i<=9;i++)
	{
		resto = i % 2;
		if ( resto == 0)
		{
			b[i] = a[i] * 5;
		}
		else
		{
			b[i] = a[i] + 5;
		}
	}
	
	// Apresentação dos vetores
	
	for (i=0;i<=9;i++)
	{
		cout << "\nA["<<i+1<<"] = " << a[i];
		cout << endl;
	}
	for (i=0;i<=9;i++)
	{
		cout << "\nB["<<i+1<<"] = " << b[i];
		cout << endl;
	}		
	cout << endl <<"Tecle <F> + <Enter> para finalizar o programa-> ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}