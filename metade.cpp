#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	float r, n;
	for (i = 0; i <= 9; i++)
	{
		cout << "Entre com um numero: ";cin >> n;
		r = n / 2;
		cout << " A metade e: " << r << endl;
	}
}