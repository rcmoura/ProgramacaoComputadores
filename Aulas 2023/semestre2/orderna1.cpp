#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int a[5], i, j, x;
	char letra;
	cout << "Leitura e apresentação ordenada de valores\n\n";
	
	for (i = 0; i <= 4; i++)
	{
		cout << "Entre com o " << setw(2) <<  i + 1 << "o. Valor = ";
		cin >> a[i];		
	}
	cout << endl;
	
	// classificação de valores
	for (i = 0; i <= 3; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if(a[i] > a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	
	for (i = 0; i <= 4; i++)
	{
		cout << setw(2) <<  i + 1 << "o. Valor = " << a[i] << endl;
	}
	
	cout << "\nTecle <E> + <ENTER> para finalizar o programa ";
	
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'E');
}	

