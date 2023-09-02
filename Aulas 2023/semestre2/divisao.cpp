#include <iostream>
using namespace std;

int main()
{
	// declaração de variaveis
	int num1, num2, divisao, resto;
	//entrada de dados
	cout << "Entre com o 1o. numero: ";
	cin >> num1;
	cout << "Entre com o 2o. numero: ";
	cin >> num2;
	// processamento
	divisao = num1 / num2;
	resto = num1 % num2;
	// saida de dados
	cout << "Dividendo: " << num1 << endl;
	cout << "Divisor: " << num2 << endl;
	cout << "Quociente: " << divisao << endl;
	cout << "Resto: " << resto;	
}
