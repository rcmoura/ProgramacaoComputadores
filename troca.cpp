#include <iostream>
using namespace std;

int main()
{
	float a, b, aux;
	cout << "Entre com o valor em A: "; cin >> a;
	cout << "Entre com o valor em B: "; cin >> b;
	aux = a;
	a = b;
	b = aux;
	cout << a << " / " << b << endl;
	system("pause");
}