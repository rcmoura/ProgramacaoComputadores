#include <iostream>
using namespace std;

int main()
{
	int a, mult;
	cout << "Entre com o 1o numero: "; cin >> a;
	mult = a % 3;
	if (mult == 0)
	{
		cout << "multiplo de 3";
	}
	else
	{
		cout << "nao e multiplo de 3";
	}
}