#include <iostream>
using namespace std;

int main()
{
	int d, n;
	cout << "Entre com um numero: "; cin >> n;
	d = n % 5;
	if (d == 0)
	{
		cout << "O numero e divisivel por 5";
	}
	else
	{
		cout << "O numero nao e divisivel por 5";
	}
}