#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	float ht, vh, pd, td, sb, sl;
	
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	
	cout << "Entre com a quantidade de horas trabalhadas: ";
	cin >> ht;
	cout << "Entre com o valor da hora de trabalho: ";
	cin >> vh;
	cout << "Entre com o valor percentual de desconto: ";
	cin >> pd;
	
	sb = ht * vh;
	td = (pd / 100) * sb; // pd * sb
	sl = sb - td;
	
	cout << "Salario Bruto....: " << setw(18) << sb << endl;
	cout << "Desconto.........: " << setw(2) << td << endl;
	cout << "Salario Liquido..: " << setw(16) << sl << endl;
	
	
}