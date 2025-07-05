/*Elabore um programa que receba um número inteiro `N` e calcule a soma de todos os números de 1 até `N`.
*/

#include <iostream>
using namespace std;

int main()
{
	int n, i,soma;
	cout << "Digite um numero: "; cin >> n;
	for (i = 1; i <= n; i++)
	{
		soma = soma + i; // Acumular a soma de i
	}
	cout << "A soma de 1 a " << n << " e:" << soma << endl;
	
}