#include <iostream>
using namespace std;

int main()
{
	int dividendo, divisor, quoc, resto;
	cout << "Entre com o dividendo: ";
	cin >> dividendo;
	cout << "Entre com o divisor: ";
	cin >> divisor;
	quoc = dividendo / divisor;
	resto = dividendo % divisor;
	cout << "Dividendo: " << dividendo << endl;
	cout << "Divisor: " << divisor << endl;
	cout << "Quociente: " << quoc << endl;
	cout << "Resto: " << resto;
}