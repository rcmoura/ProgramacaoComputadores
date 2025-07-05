#include <iostream>
using namespace std;

int main()
{
	int dividendo, divisor, aux, resto;
	cout << "Entre com o Dividendo: "; cin >> dividendo;
	cout << "Entre com o Divisor: "; cin >> divisor;
	if (dividendo < divisor)
	{
		aux = dividendo;
		dividendo = divisor;
		divisor = aux;
	}
	resto = dividendo - divisor;
	while (resto > divisor)
	{
		dividendo = resto;
		resto = dividendo - divisor;
	}
	cout << "Resto: " << resto << endl;
}