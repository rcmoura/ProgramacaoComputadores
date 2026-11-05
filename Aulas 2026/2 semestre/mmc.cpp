#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a, b, aux, resto,soma;
	cout << "Entre com o primeiro numero: "; cin >> a;
	cout << "Entre com o segundo numero: "; cin >> b;
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	soma = a;
	//resto = ;
	while ( soma % b != 0)
	{
		soma = soma + a;
	}
	cout << "O MMC: " << soma << endl;
}
