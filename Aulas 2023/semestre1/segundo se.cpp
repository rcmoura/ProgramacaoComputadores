#include <iostream>
using namespace std;

int main()
{
	int a,b,r,t;
	cout << "Entre com valor <A>: "; cin >> a;
	cout << "Entre com valor <B>: "; cin >> b;
	r = a + b;
	if (r > 20)
	{
		t = r + 8;
	}
	else
	{
		t = r - 5;
	}
	cout << "Resultado = " << t;
}