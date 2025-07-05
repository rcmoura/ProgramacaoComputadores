#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int a[10], b[10];
	int i;
	char letra;
	cout << "Exemplo de checagem de indice\n\n";
	// entrada de dados
	for (i = 0; i <= 9; i++)
	{
		cout << "Informe um valor para o elemento nr. ";
		cout << i + 1 << ": ";
		cin >> a[i];
	}
	// processamento par ou impar
	for (i=0;i<=9;i++)
	{
		if (i % 2 == 0)
		{
			b[i] = a[i] * 5;
		}
		else
		{
			b[i] = a[i] + 5;
		}
	}
	// apresentação dos vetores
	for (i=0;i<=9;i++)
	{
		cout << "\nA["<<i<<"] = "<<a[i];
		cout << endl;
	}
	for (i=0;i<=9;i++)
	{
		cout << "\nB["<<i<<"] = "<<b[i];
		cout << endl;
	}
	cout << "\nTecle <F> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}