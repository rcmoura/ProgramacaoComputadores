#include <iostream>
using namespace std;

int main()
{
	int a, b, r;
	cout << "Entre com o valor de <A>: "; cin >> a;
	cout << "Entre com o valor de <B>: "; cin >> b;
	r = a + b;
	if (r > 10)
	{
		cout << "Resultado -> " << r << endl;
	}
	else
	{
		cout << "O resultado e menor que 10!!!!";
	}
}