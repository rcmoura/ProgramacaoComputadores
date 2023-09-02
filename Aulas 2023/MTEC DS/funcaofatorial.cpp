#include <iostream>
#include <cctype>
using namespace std;

int fatorial(int n);
int pausa();


int main()
{
	int x;
	cout << "Calculo de Fatorial" << endl;
	cout << "Entre com um valor inteiro: "; cin >> x;
	cout << "Faotrial de " << x << " = " << fatorial(x) << endl;
	pausa();
}

int fatorial(int n)
{
	int i, fat;
	fat = 1;
	for (i=1; i <= n; i++)
	{
		fat = fat * i; //fat *= i
	}
	return fat;
}

int pausa()
{
	char letra;
	cout << endl;
	cout << "Tecle <C> + <Enter> para finalizar... ";
	do
		{
			letra = cin.get();
			letra = toupper(letra);
		}
	while (letra != 'C');
	return 0;
}