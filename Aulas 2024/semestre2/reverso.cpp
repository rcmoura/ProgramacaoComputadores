/*Elabore um programa que receba um número e exiba o número invertido.*/


#include <iostream>
using namespace std;

int main()
{
	int num, reverso, digito;
	reverso = 0;
	cout << "Digite um numero: "; cin >> num;
	
	while (num != 0)
	{
		digito = num % 10;
		reverso = reverso * 10 + digito; // constroi o numero reverso
		num = num / 10; // remove o ultimo digito numero original
	}
	
	cout << "O numero invertido e " << reverso << endl;
}