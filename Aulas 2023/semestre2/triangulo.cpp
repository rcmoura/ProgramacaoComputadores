#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	int a,b,c,l1,l2,l3;
	cout << "Entre com o 1o. lado -> ";cin >> l1;
	cout << "Entre com o 2o. lado -> ";cin >> l2;
	cout << "Entre com o 3o. lado -> ";cin >> l3;
	a = l1 + l2;
	b = l1 + l3;
	c = l3 + l2;
	if (a > l3 && b > l2 && c > l1)
	{
		cout << "Forma um Triangulo" << endl;
		if (a == b && a == c)
		{
			cout << "Triangulo Equilatero" << endl;
		}
		else
		{
			if (a == b || a == c || b == c)
			{
				cout << "Triangulo Isoceles" << endl;
			}
			else
			{
				cout << "Triangulo Escaleno" << endl;
			}
		}
	}
	else
	{
		cout << "Nao forma um Triangulo" << endl;
	}
}
