#include <iostream>
using namespace std;

int main()
{
	int vet1[10], vet2[20], vetc[10], i, c, d, l;
	l = 0;
	cout << "\nEntrada de dados do Vetor 1 (10 elementos): ";
	for(i=0;i<=9;i++)
	{
		cout << "Entre com o "<< i+1 << "o. elemento: "; cin >> vet1[i];
	}
	cout << "\nEntrada de dados do Vetor 2 (20 elementos): ";
	for(i=0;i<=19;i++)
	{
		cout << "Entre com o "<< i+1 << "o. elemento: "; cin >> vet2[i];
	}
	for(i=0; i<=9; i++)
	{
		vetc[i]= -999999999;
		for(i=0; i<=9; i++)
		{
			c=0;
			while (vet1[i] != vet2[c] && c < 19)
			{
				c++;
				if (vet1[i] == vet2[c])
				{
					d=0;
					while (vet1[i] != vetc[d] && d < l)
					{
						d++;
						if ( d == l)
						{
							vetc[d] = vet1[i];
							l++;
						}
					}
				}
			}
		}
	}
	if (l != 0)
	{
		cout << "\n\nElementos comuns\n\n";
		for (i=0; i<=l-1; i++)
		{
			cout << endl << vetc[i];
		}
	}
	else
	{
		cout << "\nNao existem elementos em comum";
	}
	cout << endl;
}