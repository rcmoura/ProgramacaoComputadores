#include <iostream>
using namespace std;

int main()
{
	float sm, qtdade, preco, vp, vd;
	cout << "Entre com o salario minimo: ";cin >> sm;
	cout << "Entre com a qdta de KW: ";cin >> qtdade;
	preco = sm / 700;
	vp = preco * qtdade;
	vd = vp * 0.9;
	cout << "Preco do KW: "<< preco << endl;
	cout << "Valor a ser pago: "<< vp << endl;
	cout << "Valor com desconto: "<< vd << endl;
}
