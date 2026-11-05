#include <iostream>
using namespace std;

int main()
{
	int num1, num2, i, soma;
	cout << "\nentre com o multiplicando: "; cin >>num1;
	cout << "\nentre com o multiplicador: "; cin >> num2;
	soma = 0;
	for( i = 1; i <= num2; i++)
	{ 
		soma = soma + num1;
	}
		
	cout << "\nProduto: " << soma;
	cout << "\n";
}