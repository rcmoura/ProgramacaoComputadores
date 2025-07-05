#include <iostream>
using namespace std;

int main()
{
	int a, b, r,s;
	cout << "Entre com um numero: "; cin >> a;
	cout << "Entre com outro numero: "; cin >> b;
	r = a + b;
	if (r > 20 )
	{
		s = r + 8;
		cout << "Resultado -> " << s;
	}
	else
	{
		s = r - 5;
		cout << "Resultado -> " << s;
	}
}