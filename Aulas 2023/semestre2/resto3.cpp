#include <iostream>
using namespace std;

int main()
{
	int dividendo, divisor, aux, resto;
	cout << "\nDigite o dividendo: "; cin >> dividendo;
	cout << "\nDigite divisor: "; cin >> divisor;
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
	cout << "\nResto: " << resto;
}
