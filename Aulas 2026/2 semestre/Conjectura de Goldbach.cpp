#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int numeroPar; // Variável para armazenar o número par fornecido

    cout << "Digite um numero par (ou um numero impar/negativo para sair): "; // Solicita número
    cin >> numeroPar; // Lê o número

    while (numeroPar > 0 && numeroPar % 2 == 0) { // Laço executado enquanto o número for positivo e par
        cout << "Arranjos de primos cuja soma e igual a " << numeroPar << ":\n"; // Título dos arranjos

        // Percorre todos os números 'i' de 1 até o número par para testar o primeiro primo
        for (int i = 1; i <= numeroPar; i++) { 
            // Verifica se 'i' é primo
            int divI = 0; // Contador de divisores para 'i'
            for (int j = 1; j <= i; j++) {
                if (i % j == 0) {
                    divI++; // Incrementa divisores
                }
            }

            if (divI == 2) { // Se 'i' tem exatamente 2 divisores, ele é primo
                // Encontra o segundo número 'k' tal que i + k = numeroPar
                int k = numeroPar - i;

                // Verifica se 'k' também é primo
                int divK = 0; // Contador de divisores para 'k'
                for (int m = 1; m <= k; m++) {
                    if (k % m == 0) {
                        divK++; // Incrementa divisores
                    }
                }

                if (divK == 2) { // Se 'k' também for primo
                    cout << i << " + " << k << " = " << numeroPar << "\n"; // Imprime o arranjo encontrado
                }
            }
        }

        cout << "\nDigite outro numero par (ou numero impar/negativo para sair): "; // Pede o próximo número
        cin >> numeroPar; // Lê o novo número
    }

    cout << "Programa encerrado." << endl; // Mensagem de término

    return 0; // Termina o programa
}