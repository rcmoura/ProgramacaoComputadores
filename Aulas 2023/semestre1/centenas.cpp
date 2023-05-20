#include <iostream>
using namespace std;

int main()
{
	int num, c, teste;
	cout << "Entre com um numero de 3 digitos: "; cin >> num;
	c = num / 100;
	teste = c % 2;
	if (teste == 0)
	{
		cout << "O numero na casa das centenas " << c << " e PAR";
	}
	else
	{
		cout << "O numero na casa das centenas " << c << " e IMPAR";
	}
}