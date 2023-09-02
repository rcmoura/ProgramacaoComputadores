#include <iostream>
#include <Math.h>
using namespace std;

int main()
{
	float num, raiz;
	int a;
	for ( a = 1; a <= 10; a++)
	{
		cout << "Entre com " << a << "o. numero: "; cin >> num;
		while (num <= 0)
		{
			cout << "ATENCAO!! Entre com " << a << "o. numero: "; cin >> num;
		}
		raiz = sqrt(num);
		cout << "Raiz quadrada: " << raiz << endl;
	}
}