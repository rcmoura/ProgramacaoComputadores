#include <iostream>
using namespace std;

int main()
{
	int a;
	float num;
	a = 0;
	cout << "Digite um numero positivos-> "; cin >> num;
	while (num > 0)
	{
			a++;
			cout << "Digite um numero positivos-> "; cin >> num;
	}
	cout << endl << "Total de Numeros-> " << a << endl;
}