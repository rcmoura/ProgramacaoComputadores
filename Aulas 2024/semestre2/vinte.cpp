#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "Entre com o numero-> "; cin >> numero;
	if (numero > 20)
	{
		cout <<"Maior que 20";
	}
	else
	{
		if (numero < 20)
		{
			cout << "Menor que 20";
		}
		else
		{
			cout << "Igual a 20";
		}
	}
}