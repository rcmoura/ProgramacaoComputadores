#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float sm, qtkw, preco, vp, vd;
	cout << "Entre com o salario minimo.: "; cin >> sm;
	cout << "Entre com a quantidade de kw.: ";cin >> qtkw;
	preco = sm / 700;
	vp = preco * qtkw;
	vd = vp * 0.9;
	cout << "Preco do kw: " << preco << endl;
	cout << "Valor a ser pago: " << vp << endl;
	cout << "Valor com descont: " << vd << endl;
}