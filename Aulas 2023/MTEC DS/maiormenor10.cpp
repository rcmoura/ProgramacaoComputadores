#include <iostream>
using namespace std;

int main()
{
	int i, num;
	float num1, maior, menor;
	cout << "Digite um numero: "; cin >> num1;
	maior = num1;
	menor = num1;
	for (i = 1; i <= 9; i++)
	{
		cout << "Digite um numero: "; cin >> num1;
		if (num1 > maior)
		{
			maior = num1;
		}
		else
		{
			if (num1 < menor)
			{
				menor = num1;
			}
		}
	}
	cout << endl << "Maior numero digitado: " << maior;
	cout << endl << "Menor numero digitado: " << menor;
	cout << endl;
}