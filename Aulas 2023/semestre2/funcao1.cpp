#include <iostream>
#include <cctype>
using namespace std;

int fatorial(int n);
int pausa();

int main()
{
	int x, y;
	cout << "\nCalculo de Fatorial\n";
	cout << "\nEntre com um valor inteiro: ";cin >> x;
	fatorial(x);
	cout << "\nEntre com um valor inteiro: ";cin >> y;
	fatorial(y);
	pausa();
}

int fatorial(int n)
{
	int i;
	long int fat;
	fat = 1;
	for (i = 1; i <= n; i++)
	{
		fat = fat * i;
	}
	cout << "Fatorial de " << n << " = a: " << fat << endl;
	return 0;
}

int pausa()
{
	char letra;
	cout << endl;
	cout << "\nTecle <E> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'E');
	return 0;
}
