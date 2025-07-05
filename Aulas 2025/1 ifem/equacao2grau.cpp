#include<iostream>
#include<Math.h>
using namespace std;

int main()
{
	float a, b, c, d, x1, x2;
	cout << "Entre com valor de <A>: "; cin >> a;
	cout << "Entre com valor de <B>: "; cin >> b;
	cout << "Entre com valor de <C>: "; cin >> c;
	if ( a == 0)
	{
		cout << "Nao e uma equacao do 2o Grau";
	}
	else
	{
		d = pow(b,2) - 4 * a * c;
		if ( d >= 0)
		{
			d = sqrt(d);
			x1 = (-b + d) / (2 * a);
			x2 = (-b - d) / (2 * a);
			cout << "x1 = " << x1 << " " << "x2 = " << x2;
		}
		else
		{
			cout << "Nao a raizes reais";
		}
	}
}