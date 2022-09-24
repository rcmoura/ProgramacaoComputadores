#include <iostream>
using namespace std;

int main()
{
	int numero;
	cout << "Entre um valor: "; cin >> numero;
	if (numero >= 20 || numero <=90)
	{
		cout << "O valor esta entre 20 e 90";
	}
	else
	{
		cout << "O valor nao esta entre 20 e 90";
	}
}