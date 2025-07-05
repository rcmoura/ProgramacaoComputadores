/* E1P que conta quantos dígitos existem em um número inteiro. */

#include <iostream>
using namespace std;

int main()
{
	int numero, contador; // Declaração do número
    cout << "Digite um número inteiro: ";
    cin >> numero; // Lê o número do usuário

    contador = 0; // Inicializa o contador de dígitos

    if (numero == 0) // Se o número for zero
        contador = 1; // Contador recebe 1

    while (numero != 0) { // Enquanto o número não for zero
        numero /= 10; // Remove o último dígito
        contador++; // Incrementa o contador
    }

    cout << "Total de dígitos: " << contador << endl; // Exibe o total de dígitos  
}