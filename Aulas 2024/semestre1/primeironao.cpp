#include <iostream>
using namespace std;

int main()
{
	float a, b, c, x;
	cout << "Entre com o valor de <A>: "; cin >> a;
	cout << "Entre com o valor de <B>: "; cin >> b;
	cout << "Entre com o valor de <X>: "; cin >> x;
	cout << endl;
	if(!(x > 5))
	{
		c = (a + b) * x;
	}
	else
	{
		c = (a - b) * x;
	}
	cout << "O resultado de C equivale  a: " << c << endl;
}
