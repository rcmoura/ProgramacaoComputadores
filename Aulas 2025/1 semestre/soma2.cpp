#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
	cout << "Entre com um numero: "; cin >> a;
	cout << "Entre com outro numero: "; cin >> b;
	r = a + b;
	if (r > 10)
	{
		cout << "Resultado -> " << r;
	}
	else
	{
		cout << "O resultado e menor ou igual 10";
	}
}