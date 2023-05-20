#include <iostream>
using namespace std;

int main()
{
	float sb, vp, credito;
	cout << "Digite o Salario Bruto: "; cin >> sb;
	cout << "Digite o valor da prestacao: "; cin >> vp;
	credito = sb * 0.3;
	if (vp <= credito)
	{
		cout << "Emprestimo concedido";
	}
	else
	{
		cout << "Emprestimo negado";
	}
}