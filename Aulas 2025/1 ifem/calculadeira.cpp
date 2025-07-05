#include <iostream>
using namespace std;

int main()
{
	float a,b,r;
	int op;
	cout << "Entre com valor <A>: "; cin >> a;
	cout << "Entre com valor <B>: "; cin >> b;
	cout << endl;
	cout << "[1] - Adicao" << endl;
	cout << "[2] - Subtracao" << endl;
	cout << "[3] - Multiplicacao" << endl;
	cout << "[4] - Divisao" << endl;
	cout << endl;
	cout << "Escolha uma opcao: "; cin >> op;
	if (op == 1)
	{
		r = a + b;
	}
	if (op == 2)
	{
		r = a - b;
	}
	if (op == 3)
	{
		r = a * b;
	}
	if (op == 4)
	{
		if (b == 0)
		{
			r = 0;
		}
		else
		{
			r = a / b;	
		}	
	}
	cout << "O resultado: " << r << endl;
}