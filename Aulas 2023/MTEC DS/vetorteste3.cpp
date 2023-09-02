#include <iostream>
using namespace std;

int main()
{
	int v[10], k, soma,maior,menor,pares;
	float media;
	for (k=0; k<10; k++)
	{
		cout << "\nDigite elemento: "; cin >> v[k]; 
	}
	maior = 0;
	menor = 0;
	soma = 0;
	if (v[0] % 2 == 0 )
	{
		pares = 1;
	}
	else
	{
		pares = 0;
		for (k =1; k<10; k++)
		{
			if(v[k]%2==0)
			{
				pares++;
			}
			soma = soma + v[k];
			if(v[k] > maior)
			{
				maior = v[k];
			}
			else
			{
				if(v[k] < menor)
				{
					menor = v[k];
				}
			}
		}
	}
	media = soma / 10;
	cout << "\nMaior: " << maior;
	cout << "\nMenor: " << menor;
	cout << "\nPercentual de Pares: " << pares << "%";
	cout << "\nMedia: " << media;
}