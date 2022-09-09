#include <iostream>
using namespace std;

int main()
{
	float a,b,c;
	cout << "Digite o 1o numero: "; cin >> a;
	cout << "Digite o 2o numero: "; cin >> b;
	cout << "Digite o 3o numero: "; cin >> c;
	if (a > b)
	{
		if ( a > c)
		{
			cout << " O maior numero: " << a;
		}
		else
		{
			cout << " O maior numero: " << c;
		}
	}
	else
	{
		if (b > c)
		{
			cout << " O maior numero: " << b;	
		}	
		else
		{
			cout << " O maior numero: " << c;
		}
	}
}