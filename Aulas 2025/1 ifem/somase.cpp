#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
	cout << "Entre com um valor <A>: "; cin >> a;
	cout << "Entre com um valor <B>: "; cin >> b;
	r = a + b;
	if (r > 10)
	{
		cout << "Resultado -> " << r;
	}
}