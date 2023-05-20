/* Estrutura de seleção

seleciona caso / switch case

*/

#include <iostream>
using namespace std;

int main()
{
	int semana;
	cout << "Entre com um numero do dia da semana: "; cin >> semana;
	system("cls");
	switch (semana)
	{
		case 1: 
			{
				cout << "Domingo";
			} 
		break;
		case 2: 
			{
				cout << "Segunda-feira";
			} 
		break;
		case 3: 
			{
				cout << "Terça-feira";
			} 
		break;
		case 4: 
			{
				cout << "Quarta-feira";
			} 
		break;
		case 5: 
			{
				cout << "Quinta-feira";
			} 
		break;
		case 6: 
			{
				cout << "Sexta-feira";
			} 
		break;
		case 7: 
			{
				cout << "Sabado";
			} 
		break;
		default:
			cout << "Dia da semana inexistente";
		break;
	}
}