#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	float a,b,c;
	cout << "Entre com o 1o. cateto: "; cin >> b;
	cout << "Entre com o 2o. cateto: "; cin >> c;
	a = sqrt(pow(b,2) + pow(c,2));
	cout << "A hipotenusa e: " << a << endl;
}
