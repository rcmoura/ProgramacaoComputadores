/*Entregar a lista no formato de português estruturado (algoritmo) 
impresso ou por manuscrito*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float sm, qtda, preco, vp, vd;
	cout << "Entre com o salario minimo: "; cin >> sm;
	cout << "Entre com qtda de KW: "; cin >> qtda;
	preco = sm / 700;
	vp = preco * qtda;
	vd = vp * 0.9;
	cout << "Preco do KW: "<< preco << endl;
	cout << "Valor a ser pago: "<< vp << endl;
	cout << "Valor com desconto: "<< vd << endl;
}