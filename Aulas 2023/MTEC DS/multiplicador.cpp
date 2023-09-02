#include <iostream>
using namespace std;

int main()
{
	int num1,num2, i, soma;
	cout << endl << "Entre com o multiplicando: ";cin >> num1;
	cout << endl << "Entre com o multiplicador: ";cin >> num2;
	soma = 0;
	for (i = 1; i <= num2; i++)
	{
		soma = soma + num1;
		cout << soma << endl;
	}
	cout << endl << "Produto: " << soma << endl;
}