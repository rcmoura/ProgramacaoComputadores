#include <iostream>
using namespace std;

int main()
{
	float a,b,c,maior,intermediario,menor,aux;
	cout << "Digite o 1o numero: ";cin >> a;
	cout << "Digite o 2o numero: ";cin >> b;
	cout << "Digite o 3o numero: ";cin >> c;
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	if (a > c)
	{
		aux = a;
		a = c;
		c = aux;
	}
	if (b > c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	maior = c;
	intermediario = b;
	menor = a;
	cout << "Maior -> " << maior << endl;
	cout << "Intermediario -> "<< intermediario << endl;
	cout << "Menor -> "<< menor << endl;
}

