#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float ht, vh, pd, td, sb, sl;
	
	cout << "Entre com a quantidade de horas trabalhadas: ";
	cin >> ht;
	cout << "Entre com o valor da hora de trabalho: ";
	cin >> vh;
	cout << "Entre com o valor percentual de desconto: ";
	cin >> pd;
	
	sb = ht * vh;
	td = (pd / 100) * sb; // pd * sb
	sl = sb - td;
	
	cout << "Salario Bruto....: " << sb << endl;
	cout << "Desconto.........: " << td << endl;
	cout << "Salario Liquido..: " << sl << endl;
	
	
}