#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	float va, i, p;
	int n;
	cout << "Entrar com valor da aplicacao: ";cin >> p;
	cout << "Digite o valor da taxa (0 - 1) ";cin >> i;
	cout << "Digite o numero de meses: ";cin >> n;
	va = p*(pow(1 + i,n)-1) / i;
	cout << "O valor acumulado: " << va << endl;
}