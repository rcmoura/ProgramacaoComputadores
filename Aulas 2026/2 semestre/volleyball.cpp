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
	int i, x, id, somaid, totid;
	float peso, totpeso, somapeso, mespeso, mesid, anopeso, anoid;
	totpeso = 0.;
	totid = 0;
	for( i = 1; i <= 30; i++)
	{ 
		somapeso = 0;
		somaid = 0;
		for( x = 1; x <= 12; x++)
		{ 
			cout << "\nDigite peso: "; cin >> peso;
			cout << "\nDigite idade: "; cin >> id;
			somapeso = somapeso + peso;
			somaid = somaid + id;
		}
		mespeso = somapeso / 12;
		mesid = somaid / 12;
		cout << "\nPeso medio do time: " << mespeso;
		cout << "\nIdade media do time: " << mesid;
		totpeso = totpeso + somapeso;
		totid = totid + somaid;
	}
	anopeso = totpeso / 360; 
	anoid = totid / 360;
	cout << "\nPeso medio de todos os times: " << anopeso;
	cout << "\nIdade media de todos os times: " << anoid;
	cout << "\n";
}
