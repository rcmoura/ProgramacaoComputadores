#include <iostream>
using namespace std;

int main()
{
	int i, ant, atual, prox, termo;
	ant = 0;
	atual = 1;
	cout << "Entre com o numero de termos: "; cin >> termo;
	for (i=1; i<=termo; i++)
	{
		cout << endl << atual << " ";
		prox = ant + atual;
		ant = atual;
		atual = prox;
	}
}
