#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int i, j, x, a[5];
	char letra;
	
	cout << "Leitura e apresentacao ordernada de valores\n\n";
	
	// Entrada dos nomes
	
	for (i=0;i<=4;i++)
	{
		cout << "Informe o "<< setw(2) << i + 1 << "o. valor: ";
		cin >> a[i];
	}
	cout << endl;
	
	// Classificação dos valores - técnica de bolha
	
	for (i=0;i<=3;i++)
	{
		for (j=i+1; j<=4; j++)
		{
			if (a[i] > a[j])
			{
				x = a[i];
				a[i] = a[j];
				a[j] = x;
			}
		}
	}
	
	// Apresentação da notas
	
		for (i=0;i<=4;i++)
	{
		cout << setw(2) << i + 1 << " o. valor " << a[i] << endl;
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