/*E1P que verifica se um número N é um número perfeito.*/

#include <iostream>
using namespace std;

int main()
{
	int N, soma, i; // Declaração do número
    cout << "Digite um número: ";
    cin >> N; // Lê o número do usuário

    soma = 0; // Inicializa a soma dos divisores

    for (i = 1; i <= N / 2; i++) { // Loop para encontrar divisores
        if (N % i == 0) { // Verifica se i é divisor de N
            soma += i; // Adiciona o divisor à soma
        }
    }

    if (soma == N) // Verifica se a soma dos divisores é igual a N
        cout << N << " é um número perfeito." << endl;
    else
        cout << N << " não é um número perfeito." << endl;
    
}