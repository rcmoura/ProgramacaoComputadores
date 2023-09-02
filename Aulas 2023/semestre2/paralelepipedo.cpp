/* 1. Faça o algoritmo (diagrama de blocos e 
português estruturado) para calcular a área (AREA) 
de uma sala, sendo que os comprimentos das paredes 
(L e C) são fornecidos pelo usuário. 
Apresente a área depois de calculada.*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, diagonal;
	cout << "Entre com a base: ";cin >> a;
	cout << "Entre com a altura: ";cin >> b;
	cout << "Entre com a profundidade: ";cin >> c;
	diagonal = sqrt(pow(a,2)+pow(b,2)+pow(c,2));
	cout << "Diagonal do Paralelepipedo-> " << diagonal << endl;
}