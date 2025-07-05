#include <iostream>
using namespace std;

int main()
{
	int codigo;
	cout << "Entre com o codigo de acesso: "; cin >> codigo;
	cout << endl;
	if (codigo == 1 or codigo == 2 || codigo == 3)
	{
		if (codigo == 1)
		{
			cout << "Foi acionado o codigo um.\n";
		}
		if (codigo == 2)
		{
			cout << "Foi acionado o codigo dois.\n";
		}
		if (codigo == 3)
		{
			cout << "Foi acionado o codigo tres.\n";
		}
	}
	else
	{
		cout << "Codigo invalido\n";
	}
}
