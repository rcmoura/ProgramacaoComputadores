#include <iostream>
using namespace std;

int main()
{
	int i, ant, atual, prox;
	ant = 0;
	atual = 1;
	for (i = 1; i <= 25; i++)
	{
		cout << endl << atual << " ";
		prox = ant + atual;
		ant = atual;
		atual = prox;
	}
}