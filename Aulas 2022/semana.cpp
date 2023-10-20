#include <iostream>
using namespace std;
// switch case
int main()
{
	int sem;
	cout << "Entre com um numero equivalente a dia da semana- "; cin >> sem;
	switch (sem)
	{
		case 1: cout << "Domingo"; break;
		case 2: cout << "Segunda - feira"; break;
		case 3: cout << "Terca - feira"; break;
		case 4: cout << "Quarta - feira"; break;
		case 5: cout << "Quinta - feira"; break;
		case 6: cout << "Sexta - feira"; break;
		case 7: cout << "Sabado"; break;
		default: cout << "Dia da semana invalido"; break;
	}
}