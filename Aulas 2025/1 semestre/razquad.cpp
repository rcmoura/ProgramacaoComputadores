#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, raiz,quad;
	cout << "Entre com um numero: "; cin >> a;
	if (a >= 0)
	{
		raiz = sqrt(a);
		cout << "Resultado -> " << raiz;
	}
	else
	{
		quad=pow(a,2);
		cout << "Resultado -> " << quad;
	}
}