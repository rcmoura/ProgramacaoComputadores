/* 1.Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. Para cada consumidor, são digitados os seguintes dados:
 
número do consumidor
quantidade de kWh consumidos durante o mês
tipo (código) do consumidor
 
1 - residencial, preço em reais por kWh = 0,3
2- comercial, preço em reais por kWh = 0,5
3 - industrial, preço em reais por kWh = 0,7
 
Os dados devem ser lidos até que seja encontrado um consumidor com número O
(zero). Calcular e imprimir:
 
o custo total para cada consumidor
o total de consumo para os três tipos de consumidor
a média de consumo dos tipos 1 e 2 */

/*3. Num campeonato europeu de volleyball, se inscreveram 30 
países. Sabendo-se que na lista oficial de cada país consta, 
além de outros dados, peso e idade de 12 jogadores criar um 
algoritmo que apresente as seguintes informações
o peso médio e a idade média de cada um dos times;
o peso medio e a idade media de todos os participantes.*/

#include <iostream>
using namespace std;

int main()
{
	int c12, codigo;
	float qtde, total, total12;
	c12 = 0;
	total = 0.;
	total12 = 0.;
	cout << "\nDigite codigo(1-res 2-com 3-ind) ou O para sair: "; cin >> codigo;
	while ( codigo != 0)
	{
		cout << "Digite quantidade em KWH: "; cin >> qtde;
		total = total + qtde;
		if(codigo == 1)
		{
			cout << "\nCusto: " << qtde * 0.3;
			c12 = c12 + 1;
			total12 = total12 + qtde;
		}
		else
		{
			if (codigo == 2)
			{
				cout << "\nCusto " << qtde * 0.5;
				c12 = c12+ 1;
				total12 = total12 + qtde;
			}
			else
			{
				if (codigo == 3)
				{
					cout << "\nCusto: " << qtde * 0.70;
				}
			}
			cout << "\nDigite codigo(1-res 2-com 3-ind) ou O para sair: "; cin >> codigo;
			cout << endl;
		}
		cout << "\nTotal consumido em 1-2-3: " << codigo << endl;
	}
	if (c12 != 0)
	{ 
		cout << "\nMédia 1-2: " << total12 / c12;
	}
	else
	{ 
		cout << "\nNenhum consumidor na faixa 1-2";
	}
	cout << "\n";
}
