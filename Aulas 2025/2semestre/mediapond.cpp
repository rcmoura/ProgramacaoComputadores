#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float num1, num2, num3, num4, mdp;
	cout << "Entre com o 1o numero: "; cin >> num1;
	cout << "Entre com o 2o numero: "; cin >> num2;
	cout << "Entre com o 3o numero: "; cin >> num3;
	cout << "Entre com o 4o numero: "; cin >> num4;
	mdp = ((num1 * 1)+(num2 * 2)+(num3 * 3)+(num4 * 4))/10;
	cout << "Media ponderada: " << mdp;
}