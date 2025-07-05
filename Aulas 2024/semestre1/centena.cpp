#include <iostream>
using namespace std;

int main()
{
	int numero, c;
	cout << "Entre com um numero de 3 digitos: ";cin >>numero;
	c = numero / 100;
	if (c % 2 == 0)
	{
		cout << "O numero da centana e par--> " << c;
	}
	else
	{
		cout << "O numero da centena e impar--> " << c;
	}
}
