/*Elabore um programa que receba um número `N` e imprima todos os números primos de 1 até `N`.*/


#include <iostream>
using namespace std;

int main()
{
	int n, i, j;
	bool primo;
	
	cout << "Digite um numero: "; cin >> n;
	
	for (i = 1; i <= n; i++)
	{
		primo = true;
		for (j = 2; j <= i / 2; j++)
		{
			if (i % j == 0)
			{
				primo = false; //se encontrar divisor, não é primo
				break;
			}
			if (primo) {
				cout << i << " ";
			}
		}
	}
}