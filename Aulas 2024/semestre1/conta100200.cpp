#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int cont;
	float num;
	cont = 0;
	cout << "Digite um numero ou 0 para sair: "; cin >> num;
	while (num != 0)
	{
		if (num>=100 && num <=200)
		{
			cont++;
		}
		cout << "Digite um numero ou 0 para sair: "; cin >> num;
	}
	cout << "Total de numeros-> " << cont;
}