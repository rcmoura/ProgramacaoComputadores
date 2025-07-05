#include <iostream>
using namespace std;

int main()
{
	int a, b, x;
	cout << "Entre com um numero: "; cin >> a;
	cout << "Entre com outro numero: "; cin >> b;
	if (a > b)
	{
		x = a;
		a = b;
		b = x;
	}
	cout << "Os valores ordenados sao: " << a << " e " << b;
}