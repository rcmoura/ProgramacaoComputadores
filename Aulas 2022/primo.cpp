#include <iostream>
using namespace std;

int main()
{
	int num, cont, num1, teste, primo, resto;
	cout << "Entre com um numero maior que 0: "; cin >> num;
	primo = 0;
	while(num > 0)
	{
		cont = 0;
		num1 = 2;
		teste = num / 2;
		while (cont == 0 && num1 <= teste)
		{
			resto = num % num1;
			if(resto == 0)
			{
				cont = 1;
				num1++;	
			}
		}
		if (cont != 1)
		{
			primo++;
			cout << "Entre com um numero maior que 0: "; cin >> num;
		}
	}
	cout << "Total de numero primos -> " << primo;
}