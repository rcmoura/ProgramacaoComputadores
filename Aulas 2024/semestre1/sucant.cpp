#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// declaração de variaveis
	int num1, suc, ant;
	// Exibindo na tela
	cout << "Entre com o 1o numero: ";
	// leitura de dados para a memoria
	cin >> num1;
	// processamento
	ant = num1 - 1;
	suc = num1 + 1;
	// Exibindo na tela
	cout << "O Antecessor e: " << ant;
	cout << " O Sucessor e: " << suc;
}
