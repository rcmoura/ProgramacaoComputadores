//Programa soma
// Biblioteca
#include <iostream> 
// facilitando o uso o do teclado (é obrigatorio)
using namespace std; 

int main()
// inicio do programa
{
	// declarando as variáveis
	int num1, num2, soma;
	// saida e entrada de dados
	cout << "Informe um valor para Num1: ";
	cin >> num1;
	cout << "Informe um valor para Num2: ";
	cin >> num2;
	// processamento
	soma = num1 + num2;
	// saida de dados
	cout << "Resultado = " << soma;
	system("pause");
}