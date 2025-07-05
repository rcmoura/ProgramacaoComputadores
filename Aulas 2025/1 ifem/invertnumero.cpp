#include <iostream>
using namespace std;

int main()
{
	int num, c, d, u, numi;
	cout << "Entre com o 1o numero de 3 digitos: "; cin >> num;
	c = num / 100;
	d = (num % 100) / 10;
	u = num % 10;
	numi = u*100 + d*10 + c;
	cout << "O numero invertido e: " << numi;
}