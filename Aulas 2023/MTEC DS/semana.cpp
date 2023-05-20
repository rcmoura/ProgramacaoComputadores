#include <iostream>
using namespace std;

int main()
{
	int semana;
	cout << "Entre com um numero equivalente a semana";
	cin >> semana;
	system("cls");
	switch (semana)
	{
		case 1:
			cout << "Domingo";
		break;
		case 2:
			cout << "Segunda-Feira";
		break;
		case 3:
			cout << "Terça-Feira";
		break;
		case 4:
			cout << "Quarta-Feira";
		break;
		case 5:
			cout << "Quinta-Feira";
		break;
		case 6:
			cout << "Sexta-Feira";
		break;
		case 7:
			cout << "Sabado";
		break;
		
	}
}