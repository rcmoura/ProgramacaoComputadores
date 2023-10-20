#include <iostream>
using namespace std;

int main()
{
	int mesa[30], i, qtde[30], lugares, codigo, lugmesa;
	
	for(i = 0; i < 30; i++)
	{
		mesa[i] = 100 + i;
		qtde[i] = 5;
	}
	
	lugares = 150;
	cout << "\nEntre com o codigo (100-129) ou 0 para terminar ";cin >> codigo;
	
	while (codigo > 0 && lugares != 0)
	{
		i = 0;
		while (codigo != mesa[i] && i < 29)
		{
			i++;
			if (codigo == mesa[i])
			{
				cout << "\nQuantidade de lugares a reservar: "; cin >> lugmesa;
				if (qtde[i] >= lugmesa)
				{
					qtde[i] = qtde[i] - lugmesa;
					lugares = lugares - lugmesa;
				}
				else
				{
					cout << "\nNao a lugar para reservar";
				}
			}
			else
			{
				cout << "\nCodigo da mesa invalido";
			}
		}
		cout << "\nEntre com o codigo (100-129) ou 0 para terminar ";cin >> codigo;
	}
	if(lugares == 0)
	{
		cout << "\nLotacao esgotada";
	}
	else
	{
		cout << "\nLugares vagos";
		for(i = 0; i < 30; i++)
		{
			if(qtde[i] != 0)
			{
				cout << "\nMesas: " << mesa[i] << " total de lugares: " << qtde[i];
			}
		}
	}
	cout << endl;
}