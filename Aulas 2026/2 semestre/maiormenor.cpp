#include <iostream>
using namespace std;

int main()
{
	int i, quant;
	float num, maior, menor;
	cout << "Quantos numeros voce quer digitar?"; cin >> quant;
	cout <<  "\nEntre com um numero:"; cin >> num;
	maior = num;
	menor = num;
	for ( i = 0; i < quant; i++)
		{
			cout << "\nEntre com um numero:"; cin >> num;
			if(num > maior)
				{ 
					maior = num;
				}
				else
				{
					if(num < menor)
					{
						menor = num;
					}
				}
		}
	cout << "\nMaior: " << maior;
	cout << "\nMenor: " << menor;
}