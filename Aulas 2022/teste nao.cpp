#include <iostream>
using namespace std;

int main()
{
	float a, b, c, x;
	cout << "Entre com o valor de <A>: "; cin >> a;
	cout << "Entre com o valor de <B>: "; cin >> b;
	cout << "Entre com o valor de <X>: "; cin >> x;
	if (!(x>5))
	{
		c = (a + b) * 5;
	}
	else
	{
		c = (a - b) * 5;
		
	}
	cout << "O resultado de <C> equivale a: "<<c;
}