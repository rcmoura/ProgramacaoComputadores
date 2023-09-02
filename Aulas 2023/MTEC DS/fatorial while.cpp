#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	int num, fat, c;
	cout << "Digite um numero inteiro positivo: "; cin >> num;
	while (num > 0)
	{
		fat = 1;
		for (c = 2; c <= num; c++)
		{
			fat = fat * c;
		}
		cout << "Fatorial -> " << fat << endl;
		cout << "Digite um numero inteiro positivo: "; cin >> num;
	}
}