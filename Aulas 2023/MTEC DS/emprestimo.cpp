#include <iostream>
using namespace std;

int main()
{
	float sb, pres, perc;
	cout << "Entre com o valor do Salario Bruto :"; cin >> sb;
	cout << "Entre com o valor da Prestacao :"; cin >> pres;
	perc = sb * 0.3;
	if (pres <= perc)
	{
		cout << "Emprestimo Concedido";
	}
	else
	{
		cout << "Emprestimo negado";
	}
}