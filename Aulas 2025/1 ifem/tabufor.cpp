#include <iostream>
using namespace std;

int main()
{
	int i;
	float n, r;
	cout << "Entre com o valor da Tabuada: "; cin >> n;
	cout << endl;
	for (i=0; i <= 10; i++)
	{
		r = n * i;
		cout << n;
		cout << " X ";
		cout << i;
		cout << " = ";
		cout << r << endl;
	}
}