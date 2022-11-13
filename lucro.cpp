#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	float precocompra[10], precovenda[10], lucro;
	int totallucromenor10, totallucromenor20, lucromaior20,a;
	
	// zerando as variaveis
	totallucromenor10 = 0;
	totallucromenor20 = 0;
	lucromaior20 = 0;
	
	// preparando entrada de dados
	for ( a = 0; a <= 9; a++)
	{
		cout << "\n Preco de compra: ";cin >> precocompra[a];
		cout << "\n Preco de venda: ";cin >> precovenda[a];
	}
	
	// processando os dados e serparando os lucros
	for ( a = 0; a <= 9; a++)
	{
		lucro = precovenda[a] - precocompra[a];
		if (lucro < 10.0)
		{
			totallucromenor10++;
		}
		else
		{
		
			if (lucro <= 20.0)
			{
				totallucromenor20++;
			}
			else
			{
				lucromaior20++;
			}
		}
	}
	cout << "\nTotal de mercadorias com lucro < 10%:  " << totallucromenor10;
	cout << "\nTotal de mercadorias com lucro com 10% <= lucro <= 20%:  " << totallucromenor20;
	cout << "\nTotal de mercadorias com lucro > 20%:  " << lucromaior20;
}