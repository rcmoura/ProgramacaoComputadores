#include <iostream>
using namespace std;

int main()
{
	int a, b, r, t;
	cout << "Entre com o valor de <A>: "; cin >> a;
	cout << "Entre com o valor de <B>: "; cin >> b;
	r = a + b;
	if (r > 20)
	{
		t = r + 8;
		cout << "Resultado -> " << t << endl;
	}
	else
	{
		t = r - 5;
		cout << "Resultado -> " << t << endl;
	}
}