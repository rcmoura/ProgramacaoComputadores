#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, i, r;
	cout << "Entre com o valor da tabuada: "; cin >> n;
	cout << endl;
	for (i=1; i<=10; i++) // i=i+1
	{
		r = n * i;
		cout << setw(2) << n;
		cout << " X ";
		cout << setw(2) << i;
		cout << " = ";
		cout << setw(10) << r << endl;
	}
}