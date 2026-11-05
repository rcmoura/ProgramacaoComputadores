#include <iostream>
using namespace std;

int main()
{
	int a, b, t;
	cout << "Entre com um numero: ";cin >> a;
	cout << "Entre com outro numero: ";cin >> b;
	t = a + b;
	if (t > 10)
	{
		cout << "O resultado e maior que 10";
	}
	else
	{
		cout << "O resultado e menor que 10";
	}
}