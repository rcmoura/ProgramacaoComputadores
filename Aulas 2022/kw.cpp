/* Faça o algoritmo (diagrama de blocos e 
português estruturado) para calcular a área (AREA) de 
uma sala, sendo que os comprimentos das paredes (L e C) 
são fornecidos pelo usuário.
 Apresente a área depois de calculada.*/

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

