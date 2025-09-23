#include <iostream>
using namespace std;

int main()
{
	int n, i, r;
	cout << "Entre com valor da tabuada: "; cin >> n;
	cout << endl;
	i = 0;
	do
	{
		r = n * i;
		cout << n;
		cout << " X ";
		cout << i;
		cout << " = ";
		cout << r << endl;
		i++;
	}
	while (i <= 10);
}