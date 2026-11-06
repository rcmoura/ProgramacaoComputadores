#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, c = 1, r;
	cout << "Entre com o valor da tabuada.: "; cin >> n;
	cout << endl;
	//c = 1;
	do
	{
		r = n * c;
		cout << setw(2) << n;
		cout << " X ";
		cout << setw(2) << c;
		cout << " = ";
		cout << setw(4) << r << endl;
		c++; // i = i + 1
	}
	while (c <= 10);
}