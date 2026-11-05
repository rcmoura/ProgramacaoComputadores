/* Repare a seguinte característica do número 3025 30 + 25 = 55 
e 552 = 3025. Criar um algoritmo que possa ler vários números 
inteiros de 4 algarismos, um de cada vez, e diga se o número 
apresenta a mesma característica (repare que 3025/100=30 com resto 25)
. O algoritmo termina quando for lido um valor menor que 1.000 
ou maior que 9999.*/

 #include <iostream>
 #include <Math.h>
using namespace std;

int main()
{
	int num, dc, du, q;
	cout << "Entre com um numero de 4 algarismo: "; cin >> num;
	while (num >= 1000 && num <= 9999)
	{
		dc = num / 100;
		du = num % 100;
		q = pow((dc + du),2);
		if (q == num)
		{
			cout << "Possui a caracteristica\n";
		}
		else
		{
			cout << "Não possui a caracteristica\n";
		}
		cout << "Entre com um numero de 4 algarismo: "; cin >> num;
	}
	cout << endl;
}