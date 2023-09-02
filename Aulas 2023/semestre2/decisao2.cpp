#include <iostream>
using namespace std;

int main()
{
	float a, b, total, resultado;
	cout << "Entre com 1o. Numero: "; cin >> a;
	cout << "Entre com 2o. Numero: "; cin >> b;
	total = a + b;
	if (total >= 10)
	{
		resultado = total + 5;
	}
	else
	{
		resultado = total - 7;
	}
	cout << "O resultado e: "<< resultado << endl;
}
