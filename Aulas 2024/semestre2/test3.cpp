#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int r, a, b1, b2;
	b1 = 0;
	b2 = 0;
	
	cout << "Entre com o valor da variavel <A>: "; cin >> a;
	r = a + b1++;
	cout << endl;
	cout << "R = " << r << endl;
	r = a + b1++;
	cout << endl;
	cout << "R = " << r << endl;
	r = a + b1++;
	cout << endl;
	cout << "R = " << r << endl;
	
	cout << "Entre com o valor da variavel <A>: "; cin >> a;
	r = a + ++b2;
	cout << endl;
	cout << "R = " << r << endl;
	r = a + ++b2;
	cout << endl;
	cout << "R = " << r << endl;
		r = a + ++b2;
	cout << endl;
	cout << "R = " << r << endl;
}