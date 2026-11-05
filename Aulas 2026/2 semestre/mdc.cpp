#include <iostream>
using namespace std;

int main()
{
	int a, b, aux, resto;
	cout << "\nEntre com 1o. Numero: "; cin >> a;
	cout << "\nEntre com 2o. Numero: "; cin >> b;
	if (a < b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	resto = a % b;
	while (resto != 0)
	{
		a = b;
		b = resto;
		resto = a % b;
	}
	cout << "\nM.D.C - > " << b;
	cout << endl;
}