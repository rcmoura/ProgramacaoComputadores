#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int num[15], i;
	char letra;
	for (i=0; i<=14; i++)
	{
		cout << "\nDigite o " << i + 1 << "o. numero: ";cin >> num[i];
	}
	cout << "\n-- RELACAO DE NUMEROS --\n";
	for (i=0; i<=14; i++)
	{
		cout << endl << i + 1 << "o. numero: " << num[i];
		if (num[i]%2==0)
		{
			cout << " -> PAR";
		}
		else
		{
			cout<< " -> IMPAR";
		}
	}
	cout << "\nTecla <F> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}