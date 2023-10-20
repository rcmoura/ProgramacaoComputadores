#include <iostream>
using namespace std;

int main()
{
	float sa, ns;
	cout << "Entre com o salario: ";cin >> sa;
	if (sa < 1500)
	{
		ns = sa * 1.15;
	}
	else
	{
		if (sa <= 2500)
		{
			ns = sa * 1.1;
		}
		else
		{
			ns = sa * 1.05;
		}
	}
	cout << "O novo salario e: " << ns << endl;
}
