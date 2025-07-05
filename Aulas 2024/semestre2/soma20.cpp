#include <iostream>
using namespace std;

int main()
{
	float a, b, total, res;
	cout << "Entre com o 1o numero: "; cin >> a;
	cout << "Entre com o 2o numero: "; cin >> b;
	total = a + b;
	if (total > 20)
	{
		res = total + 8;
		cout << "O resultado e: " << res;
	}
	else
	{
		res = total - 5;
		cout << "O resultado e: " << res;
	}
}