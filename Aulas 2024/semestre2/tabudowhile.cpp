#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, i, r;
	cout << "Entre com o valor da tabuada: "; cin >> n;
	cout << endl;
	i = 1;
	do
	{
		r = n * i;
		cout << setw(2) << n;
		cout << " X ";
		cout << setw(2) << i;
		cout << " = ";
		cout << setw(10) << r << endl;
		i++;
	}
	while (i <= 10);
}