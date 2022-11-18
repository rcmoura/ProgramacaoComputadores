#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int fatorial(int n);


int main()
{
	int x;
	cout << "\nCalculo de fatorial\n";
	cout << "\nEntre com um valor inteiro: "; cin >> x;
	cout << "\nFatorial de "<< x << " = a: " <<fatorial(x)<< endl;

}

int fatorial(int n)
{
	int i,fat;
	fat = 1;
	for (i=1;i<=n;i++)
	{
		fat = fat * i; // fat *= i
	}
	return fat;
}