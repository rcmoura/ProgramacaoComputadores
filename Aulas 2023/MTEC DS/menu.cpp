#include <iostream>
using namespace std;

int main()
{
	int op, calorias;
	calorias = 0;
	cout << "Digite: 1-Vegetariano | 2-Peixe | 3-Frango | 4-Carne -> "; cin >> op;
	switch (op)
	{
		case 1: calorias = calorias  + 180; break;
		case 2: calorias = calorias  + 230; break;
		case 3: calorias = calorias  + 250; break;
		case 4: calorias = calorias  + 350; break;
		default: cout << "Opcao invalida"; break;
	}
	cout << "Digite: 1-Abacaxi | 2-Sorvete Diet | 3-Suco Melao | 4-Refrigerante diet -> "; cin >> op;
	switch (op)
	{
		case 1: calorias = calorias  + 75; break;
		case 2: calorias = calorias  + 110; break;
		case 3: calorias = calorias  + 170; break;
		case 4: calorias = calorias  + 200; break;
		default: cout << "Opcao invalida"; break;
	}
	cout << "Digite: 1-Cha | 2-Suco de Laranja | 3-Mousse diet | 4-Mouse de chocolate -> "; cin >> op;
	switch (op)
	{
		case 1: calorias = calorias  + 20; break;
		case 2: calorias = calorias  + 70; break;
		case 3: calorias = calorias  + 100; break;
		case 4: calorias = calorias  + 65; break;
		default: cout << "Opcao invalida"; break;
	}
	cout << "Total de calorias " << calorias;
}