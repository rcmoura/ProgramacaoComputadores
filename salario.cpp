#include <iostream>
using namespace std;

int main()
{
	float ht, vh, pd, td, sb, sl;
	cout << "Entre com qtda de horas trabalhadas: ";
	cin >> ht;
	cout << "Entre com o valor hora de trabalho: ";
	cin >> vh;
	cout << "Entre com o valor percentual de desconto: ";
	cin >> pd;
	sb = ht * vh;
	td = (pd / 100) * sb;
	sl = sb - td;
	cout << endl;
	cout << "Salario bruto..: " << sb << endl;
	cout << "Desconto.......: " << td << endl;
	cout << "Salario liquido: " << sl << endl;
	system("pause");
}