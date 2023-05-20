#include <iostream>
using namespace std;

int main()
{
	int n, i, r;
	cout << "Entre com o valor da Tabuada--> ";cin >> n;
	for (i=1; i<=10; i = i + 5)
	{
		r = n * i;
		cout << n;
		cout << " X ";
		cout << i;
		cout << " = ";
		cout << r << endl;
	}		
	
}