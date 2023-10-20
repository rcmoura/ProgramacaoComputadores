#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i;
	long int fat;
	i = 1;
	fat = 1;
	cout << "\nPrograma Fatorial\n";
	cout << "\nFatorial de que valor: "; cin >> n;
	while (i <= n)
	{
		fat = fat * i;
		i++;
	}
	cout << endl;
	cout << "Fatorial de " << n <<"!" << " = " << fat << endl;
}