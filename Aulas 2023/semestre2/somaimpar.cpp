#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int a[10], b[10], i, soma;
	char letra;
	soma = 0;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	cout << "----- Exemplo de checagem de indice -----\n\n";
	 
	 // Entrada de dados
	 
	 for (i = 0; i <= 9; i++)
	 {
	 	cout << "Informe um valor para o elemento  nr. " << setw(2);
	 	cout << i  << ": ";
	 	cin >> a[i];
	 }
	 
	 // processamento par ou impar
	 
	 for (i = 0; i <= 9; i++)
	 {
	 	if (i%2 != 0)
	 	{
	 		soma = soma + a[i];
		}
	}
	// Apresentação dos vetores
	
	cout << "\n\nA soma dos elementos equivale a: " << setw(4) << soma;
	cout << endl;
	cout << "\nTecle <F> + <ENTER> para finalizar o programa-> ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}
