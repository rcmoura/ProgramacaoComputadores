#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i, r;
	cout << "Entre com o valor da Tabuada: ";cin >> n;
	cout << endl;
	i = 0;
	do
	{
		r = n * i;
		cout << setw(2) << n;
		cout << " X ";
		cout << setw(2) << i;
		cout << " = ";
		cout << setw(3) << r << endl;
		i++; // i = i + 1
	}
	while (i <= 10);
}