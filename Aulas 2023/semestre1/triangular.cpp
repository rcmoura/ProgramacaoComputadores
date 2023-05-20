#include <iostream>
using namespace std;

int main()
{
	int num, p, num1;
	num1 = 1;
	cout << "Digite um numero: "; cin >> num;
	p = num1 * (num1 + 1) * (num1 + 2);
	while (p < num)
	{
		num1++;
		p = num1 * (num1 + 1) * (num1 + 2);
	}
	if (p==num)
	{
		cout << "E triangular";
	}
	else
	{
		cout << "Nao e triangular";
	}
}