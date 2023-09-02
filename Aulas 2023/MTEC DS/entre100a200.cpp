#include <iostream>
using namespace std;

int main()
{
	int a;
	float num;
	cout << "Digite um numero ou 0 para sair-> "; cin >> num;
	while (num != 0)
	{
		if (num >= 100 && num <= 200)
		{
			a++;
		}
		cout << "Digite um numero ou 0 para sair-> "; cin >> num;
	}
	cout << endl << "Total de Numeros-> " << a << endl;
}