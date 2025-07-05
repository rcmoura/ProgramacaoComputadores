#include <iostream>
using namespace std;

int main()
{
	float sa, ns;
	cout << "Entre com o salario: "; cin >> sa;
	if (sa < 1418)
	{
		ns = sa * 1.15;
	}
	else
	{
		if (sa <= 1900)
		{
			ns = sa * 1.10;
		}
		else
		{
			ns = sa * 1.05;
		}
	}
	cout << "O novo salario: " << ns;
}
