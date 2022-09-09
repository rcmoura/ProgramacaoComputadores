#include <iostream>
using namespace std;

int main()
{
	float a, b, r,rs;
	cout << "Entre com o valor de <A>: ";cin >> a;
	cout << "Entre com o valor de <B>: ";cin >> b;
	cout << "\n";
	r = a + b;
	if (r > 50)
	{
		rs = r + 8;
		cout << "Resultado = " << rs;
	}
	else
	{
		rs = r - 5;
		cout << "Resultado = " << rs;
	}
	cout << endl;
	system("pause");
}