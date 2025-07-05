/*Elabore um programa que receba `N` números e calcule a média desses números.*/


#include <iostream>
using namespace std;

int main()
{
	int num, i, n, soma;
	float media;
	soma = 0;
	cout << "Quantos numero deseja inserir? ";
	cin >> num;
	
	for (i = 1; i <= num; i++)
	{
		cout << "Digite um numero " << i << "o : ";
		cin >> n;
		soma = soma + n;
	}
	media = soma / num;
	cout << "A media e " << media << endl;
}