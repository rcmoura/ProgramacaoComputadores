#include <iostream>
using namespace std;

int main()
{
	float a, b, total;
	cout << "Entre com 1o. Numero: "; cin >> a;
	cout << "Entre com 2o. Numero: "; cin >> b;
	total = a + b;
	if (total > b)
	{
		cout << "Total: " << total;
	}
	cout << endl;
}
