#include <iostream> // chamada da bilioteca de entrada e saida
using namespace std; // utilizado para usar nomes com espaço

int main() // função inicial
{ // inicio
	int num, c, d, u, inv; // declaração de variaveis
	cout << "Entre com um numero de tres digitos: ";
	cin >> num;
	c = num / 100;
	d = (num % 100) / 10;
	u = num % 10;
	inv = u*100+d*10+c;
	cout << "O numero invertido e: " << inv;
} // fim