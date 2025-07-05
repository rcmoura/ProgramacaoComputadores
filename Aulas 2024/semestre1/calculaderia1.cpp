#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, r;
	int opcao;
	cout << setprecision(2);
//	cout << setiosflags(ios::right);
//	cout << setiosflags(ios::fixed);
	cout << "Entre com valor <A>: "; cin >> a;
	cout << "Entre com valor <B>: "; cin >> b;
	cout << endl;
	cout << "[1] - Adicao\n";
	cout << "[2] - Subtracao\n";
	cout << "[3] - Multiplicacao\n";
	cout << "[4] - Divisao\n";
	cout << "Escolha uma opcao.: "; cin >>opcao;
	if (opcao == 1)
	{
		r = a + b;
	}
	if (opcao == 2)
	{
		r = a - b;
	}
	if (opcao == 3)
	{
		r = a * b;
	}
	if (opcao == 4)
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
	cout << endl;
	cout << "o Resultado e.: " << setw(15) << r;
}
