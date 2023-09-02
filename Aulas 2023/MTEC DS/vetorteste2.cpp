#include <iostream>
using namespace std;

int main()
{
	int cont, l;
	float num, v[10], v1[10];
	cont = 0;
	cout << "\nDigite numero positivo ou 0 para terminar: ";cin >> num;
	while (cont < 10  && num > 0)
	{
		v[cont] = num;
		v1[cont] = 1 / num;
		cont++;
		cout << "\nDigite numero positivo ou 0 para terminar: ";cin >> num;	
	}
	if (cont == 0)
	{
		cout << "\nVetor nao tem dados!!";
	}
	else
	{
		cont--;
		for (l=0;l<=cont;l++)
		{
			cout << endl << v1[l];
		}
	}
	cout << endl;
}