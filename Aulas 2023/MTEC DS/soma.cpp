#include <iostream>
using namespace std;

int main()
{
	float a, b, soma, result;
	cout << "Entre com o valor de <A> :"; cin >> a;
	cout << "Entre com o valor de <B> :"; cin >> b;
	soma = a + b;
	if (soma >= 20)
	{
		result = soma + 8;
	}
	else
	{
		result = soma - 5;
	}
	cout << "O resultado e: " << result << endl;
}