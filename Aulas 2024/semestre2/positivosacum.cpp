#include <iostream>

using namespace std;

int main()
{
	int cont;
	float num;
	cont = 0;
	cout << "Digite um numero positivo: "; cin >> num;
	while (num > 0)
	{
		cont++;
		cout << "Digite um numero positivo: "; cin >> num;
	}
	cout << "Total de positivos: " << cont;
}