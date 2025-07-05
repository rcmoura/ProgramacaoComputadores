#include <iostream>
using namespace std;

int main()
{
	float num;
	cout << "Digite um numero: "; cin >> num;
	if (num > 20)
	{
		cout << "Maior que 20";
	}
	else
	{
		if (num < 20)
		{
			cout << "Menor que 20";
		}
		else
		{
			cout >> "Igual a 20";
		}
	}
	cout << endl;
}