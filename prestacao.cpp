#include <iostream>
using namespace std;

int main()
{
	float prest, valor, taxa;
	int tempo;
	cout << "Digite o valor da Prestacao.: "; cin >> valor;
	cout << "Digite a taxa.: "; cin >> taxa;
	cout << "Digite o Tempo(numero de meses).: "; cin >> tempo;
	prest = valor + (valor * (taxa / 100)*tempo);
	cout << " O valor da prestacao em atraso..: R$" << prest << endl;
	system("pause");
}