#include <iostream>
using namespace std;

int main()
{
	float a, b,c, x;
	cout << "Entre como o valor <A>"; cin >> a;
	cout << "Entre como o valor <B>"; cin >> b;
	cout << "Entre como o valor <X>"; cin >> x;
	cout << endl;
	if (!(x > 5))
	{
		c = (a + b) * x;
	}
	else
	{
		c = (a - b) * x;
	}
	cout << "O resultado de C equivale a: " << c; 
	
}