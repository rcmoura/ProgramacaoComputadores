#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num, quad, raiz;
	cout << "Entre com um numero: ";
	cin >> num;
	quad = pow(num,2);
	raiz = sqrt(num);
	cout << "Numero: " << num << endl;
	cout << "Quadrado: " << quad << endl;
	cout << "Raiz quadrada: " << raiz << endl;
}