#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float a, b, r;
	int opcao;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	cout << "Entre com o Valor de <A> -> ";cin >> a;
	cout << "Entre com o Valor de <B> -> ";cin >> b;
	cout << endl;
	cout << "[1] - Adicao" << endl;
	cout << "[2] - Subtracao" << endl;
	cout << "[3] - Multiplicacao" << endl;
	cout << "[4] - Divisao" << endl;
	cout << endl;
	cout << "Escolha um opcao: ";cin >> opcao;
	if (opcao == 1)
	{
		r=a+b;
	}
	if (opcao == 2)
	{
		r=a-b;
	}
	if (opcao == 3)
	{
		r=a*b;
	}
	if (opcao == 4)
	{
		if (b == 0)
		{
			cout << "NOPE - divisao por zero";
		}
		else
		{
			r = a / b;
		}
	}
	cout << "\nO resultado e: " << setw(15) <<r << endl;
	system("pause");
}