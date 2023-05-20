#include <iostream>
using namespace std;

int main()
{
	int num, c , resto;
	cout << "Entre com um numero de 3 digitos :"; cin >> num;
	c = num / 100;
	resto = c % 2;
	if (resto == 0)
	{
		cout << "Par";
	}
	else
	{
		cout << "Impar";
	}
}