#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int numero, resto;
	cout << "Entre com um Numero: "; cin >> numero;
	resto = numero % 3;
	if (resto == 0)
	{
		cout << "Multiplo de 3!";
	}
	else
	{
		cout << "Nao e multiplo de 3!";
	}
	cout << endl;
}
