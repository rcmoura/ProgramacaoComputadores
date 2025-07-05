#include <iostream>
using namespace std;

int main()
{
	float a, b, c;
	cout << "Entre com o lado <A>: "; cin >> a;
	cout << "Entre com o lado <B>: "; cin >> b;
	cout << "Entre com o lado <C>: "; cin >> c;
	if (a < b + c && b < a + c && c < a + b)
	{
		cout << endl;
		cout << "Forma um triangulo";
		cout << endl;
		if (a==b && b==c)
		{
			cout << "Triangulo Equilatero";
			cout << endl;
		}
		else
		{
			if (a==b || a==c ||c==b)
			{
				cout << "Triangulo Isosceles";
				cout << endl;
			}
			else
			{
				cout << "Triangulo Escaleno"; 
				cout << endl;
			}
		}
	}
	else
	{
		cout << endl;
		cout << "Nao forma um triangulo";
		cout << endl;
	}
}