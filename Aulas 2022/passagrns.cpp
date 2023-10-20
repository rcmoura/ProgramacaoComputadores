#include <iostream>
using namespace std;

int main()
{
	int op;
	cout << "Digite: 1-ida | 2-ida e Volta "; cin >> op;
	switch (op)
	{
		case 1: 
			cout << "Digite: 1-Norte | 2-Nordeste | 3-Centro Oeste | 4-Sul -> "; cin >> op;
			switch (op)
			{
				case 1: cout << "R$500,00"; break;
				case 2: cout << "R$350,00"; break;
				case 3: cout << "R$350,00"; break;
				case 4: cout << "R$300,00"; break;
				default: cout << "Opcao invalida"; break;
			}
		break;
		case 2: 
			cout << "Digite: 1-Norte | 2-Nordeste | 3-Centro Oeste | 4-Sul -> "; cin >> op;
			switch (op)
			{
				case 1: cout << "R$900,00"; break;
				case 2: cout << "R$650,00"; break;
				case 3: cout << "R$600,00"; break;
				case 4: cout << "R$550,00"; break;
				default: cout << "Opcao invalida"; break;
			}
		break;
	}
	
}