#include <iostream>
using namespace std;

int main()
{
	float a,b,c,maior,intermediario,menor;
	cout << "Digite o 1o numero: ";cin >> a;
	cout << "Digite o 2o numero: ";cin >> b;
	cout << "Digite o 3o numero: ";cin >> c;
	if (a > b)
	{
		if (c > a)
		{
			maior = c;
			intermediario = a;
			menor = b;
		}
		else
		{
			if (c > b)
			{
				maior = a;
				intermediario = c;
				menor = b;
			}
			else
			{
				maior = a;
				intermediario = b;
				menor = c;
			}
		}
	}
	else
	{
		if (c > b)
		{
			maior = c;
			intermediario = b;
			menor = a;
		}
		else
		{
			if (c > a)
			{
				maior = b;
				intermediario = c;
				menor = a;
			}
			else
			{
				maior = b;
				intermediario = a;
				menor = c;
			}
		}
	}
	cout << "Maior -> " << maior << endl;
	cout << "Intermediario -> "<< intermediario << endl;
	cout << "Menor -> "<< menor << endl;
}
