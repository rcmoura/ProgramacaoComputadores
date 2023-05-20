#include <iostream>
using namespace std;

int main()
{
	float num,maior,menor,soma,media;
	int a;
	cout << "Entre com um numero ou 0 para terminar: "; cin >> num;
	a = 0;
	soma = 0;
	maior = num;
	menor = num;
	while( num != 0)
	{
		a++;
		soma = soma + num;
		if (num > maior)
		{
			maior = num;
		}
		else
		{
			if (num < menor)
			{
				menor = num;
			}
		}
		cout << "Entre com um numero ou 0 para terminar: "; cin >> num;
	}
	media = soma / a;
	cout << "Maior: " << maior << endl;
	cout << "Menor: " << menor << endl;
	cout << "Media: " << media << endl;
}