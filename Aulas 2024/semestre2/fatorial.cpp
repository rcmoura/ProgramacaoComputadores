/*Elabore um programa que receba um número inteiro e calcule seu fatorial.*/

#include <iostream>
using namespace std;

int main()
{
	int num, i, fatorial;
	fatorial = 1;
	cout << "Digite um numero: ";
	cin >> num;
	
	for (i = 1; i <= num; i++)
	{
		fatorial = fatorial * i;
	}
	
	cout << "O fatoorial de " << num << " e: " << fatorial << endl;
}