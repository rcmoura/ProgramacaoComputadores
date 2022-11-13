#include <iostream>
using namespace std;

int main()
{
	int num[20], valor[20], destino[20], data[20], nc, k;
	
	cout << "\Entre com numero de cheques no Talionario: ";
	cin >> nc;
	
	for (k = 0; k < nc; k++)
	{
		cout << "\nNumero do cheque: "; cin >> num[k];
		cout << "\nValor do cheque: "; cin >> valor[k];
		cout << "\nData do cheque: "; cin >> data[k];
		cout << "\nDestino do cheque: "; cin >> destino[k];
	}
	
	cout << "\n**** RELACAO DE CHEQUE ****";
	
	for (k = 0; k < nc; k++)
	{
		cout << "\nNumero do cheque: " << num[k];
		cout << "\nValor do cheque: " << valor[k];
		cout << "\nData do cheque: " << data[k];
		cout << "\nDestino do cheque: " << destino[k];
	}
	
}