/*Elabore um programa que receba um número `N` e imprima todos os números pares de 0 até `N`.*/


#include <iostream>
using namespace std;

int main()
{
	int num, i;
	cout << "Digite um numero: ";
	cin >> num;
	
	for (i = 0; i <= num; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " ";
		}
	}
	
}