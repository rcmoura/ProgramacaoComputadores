// declaração da biblioteca
#include <iostream>
using namespace std;

int main()
{
	// declaração de variaveis
	int num1, ant, suc;
	// entrada de dados
	cout << "Entre com o 1o numero: "; cin >> num1;
	// processamento
	ant = num1 - 1;
	suc = num1 + 1;
	// saida de dados
	cout << "Antecessor-> " << ant;
	cout << "Sucessor-> " << suc;
}