#include <iostream>
using namespace std;

int main()
{
	int base, expo, pot, i;
	cout << "Digite a base inteira maior do que 1: "; cin >> base;
	cout << "Digite o expoente inteiro maior que 1: "; cin >> expo;
	if ( base >= 2 && expo > 1)
	{
		pot = 1;
		for (i = 1; i<=expo; i++)
		{
			pot = pot * base;
		}
		cout << "Potencia: " << pot;
	}
	else
	{
		cout << "Nao sastifazem a condicao!!!";
	}
}