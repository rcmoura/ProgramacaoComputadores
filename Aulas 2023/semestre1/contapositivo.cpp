#include <iostream>
using namespace std;

int main()
{
	int a;
	float num;
	cout << "Digite numero postivo: "; cin >> num;
	a = 0;
	while (num > 0)
	{
		a++;
		cout << "Digite numero postivo: "; cin >> num;
	}
	cout << "Total de numeros digitados: " << a << endl;
}