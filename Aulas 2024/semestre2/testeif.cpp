#include <iostream>
using namespace std;

int main()
{
	float a, b, total;
	cout << "Entre com o 1o numero: "; cin >> a;
	cout << "Entre com o 2o numero: "; cin >> b;
	total = a + b;
	if (total > b)
	{
		cout << "O resultado e: " << total;
	}
}