#include <iostream>
using namespace std;

int main()
{
	int idade, anon, anoa;
	cout << "Entre com ano de Nascimento: "; cin >> anon;
	cout << "Entre com ano Atual: "; cin >> anoa;
	if (anon > anoa)
	{
		cout << "Data de Nascimento invalida";
	}
	else
	{
		idade = anoa - anon;
		cout<< "A idade e: " << idade;
	}
}
