#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float n,i,r;
	cout << "Entre com o valor da tabuada: "; cin >> n;
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
		i++;
	}
	while (i <= 10);
}