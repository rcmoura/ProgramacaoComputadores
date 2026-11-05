#include <iostream>
using namespace std;

int main()
{
	int num, cont, num1, primo;
	cout << "\nEntre com o numero maior do que 0: "; cin >> num;
	primo = 0;
	while (num > 0)
	{
		cont = 0;
		num1 = 2;
		while(cont == 0 && num1<= num / 2)
		{
			if( num % num1 == 0)
			{
				cont = 1; 
			}
			num1++;
		}
		if ( cont != 1)
		{ 
			primo++; 
		}
		cout << "\nEntre com o numero maior do que 0:"; cin >> num;
	}
	cout << "\nTotal de primos: " << primo;
	cout << endl;
}