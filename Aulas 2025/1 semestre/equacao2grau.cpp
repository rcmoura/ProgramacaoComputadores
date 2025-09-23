#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	float a,b,c,d,x1,x2;
	cout << "Digite o 1o numero: ";cin >> a;
	cout << "Digite o 2o numero: ";cin >> b;
	cout << "Digite o 3o numero: ";cin >> c;
	if (a == 0)
	{
		cout << "\nNao e uma equacao do 2o grau";
	}
	else
	{
		d = pow(b,2) - 4 * a * c;
		if (d >= 0)
		{
			d = sqrt(d);
			x1=(-b + d )/(2 * a);
			x2=(-b- d) / (2 * a);
			cout << "\nx1 = " << x1 <<" x2 = " << x2 << endl;
		} 
		else
		{
			cout << "\nNao ha raizes reais";
		}
	}
}