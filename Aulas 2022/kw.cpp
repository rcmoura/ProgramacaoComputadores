/* Fa�a o algoritmo (diagrama de blocos e 
portugu�s estruturado) para calcular a �rea (AREA) de 
uma sala, sendo que os comprimentos das paredes (L e C) 
s�o fornecidos pelo usu�rio.
 Apresente a �rea depois de calculada.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float sm, qtdade, preco, vp, vd;
	cout << "Entre com o salario minimo: "; cin >> sm;
	cout << "Entre com a quantidade de Kw: "; cin >> qtdade;
	preco = sm/700;
	vp = preco * qtdade;
	vd = vp * 0.9;
	cout << "Preco do Kw: " << preco << endl;
	cout << "Valor a ser pago: " << vp << endl;
	cout << "Valor com desconto: "<< vd << endl;
	system("pause");
}

