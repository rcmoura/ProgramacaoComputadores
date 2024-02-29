#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int a[10], b[10], i;
	char letra;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	cout << "----- Exemplo de checagem de indice -----\n\n";
	 
	 // Entrada de dados
	 
	 for (i = 0; i <= 9; i++)
	 {
	 	cout << "Informe um valor para o elemento  nr. " << setw(2);
	 	cout << i + 1 << ": ";
	 	cin >> a[i];
	 }
	 
	 // processamento par ou impar
	 
	 for (i = 0; i <= 9; i++)
	 {
	 	if (i%2 == 0)
	 	{
	 		b[i] = a[i] * 5;
		}
		else
		{
			b[i] = a[i] + 5;
		}
	}
	// Apresentação dos vetores
	
	for (i = 0; i <= 9; i++)
	{
		cout << "\nA[" << setw(2) << i << "] = " << setw(3) << a[i];
		cout << endl;
	}
	for (i = 0; i <= 9; i++)
	{
		cout << "\nB[" << setw(2) << i << "] = " << setw(3) << b[i];
		cout << endl;
	}
	cout << endl;
	cout << "\nTecle <F> + <ENTER> para finalizar o programa-> ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}
