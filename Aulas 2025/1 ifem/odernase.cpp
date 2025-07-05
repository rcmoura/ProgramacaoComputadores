#include <iostream>
using namespace std;

int main()
{
	int a, b, x;
	cout << "Entre com um valor <A>: "; cin >> a;
	cout << "Entre com um valor <B>: "; cin >> b;
	if (a > b)
	{
		x = a;
		a = b;
		b = x;
	}
	cout << "O valores ordernados sao: " << a << " e " << b;
	cout << endl;
}