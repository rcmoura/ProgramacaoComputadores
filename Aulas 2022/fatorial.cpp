#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n,i;
	long int fat;
	i = 1;
	fat = 1;
	cout << "**** PROGRAMA FATORIAL ****" << endl;
	cout << "\nFatorial de que valor: "; cin >> n;
	do
	{
		fat = fat * i;
		cout << i << " - ";
		i++;
	}
	while (i <= n);
	cout << endl;
	cout << "FATORIAL DE " << n << " = " << fat << endl;
}