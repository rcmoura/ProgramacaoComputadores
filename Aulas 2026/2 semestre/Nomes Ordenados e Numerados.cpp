#include <iostream> // Inclui a biblioteca de entrada e saída padrão
#include <string>    // Inclui a biblioteca para manipulação de strings

using namespace std; // Utiliza o namespace padrão

int main() {
    string NOME[10]; // Declara o vetor de strings com capacidade para 10 nomes
    string aux;      // Variável auxiliar usada para realizar a troca na ordenação

    // Leitura dos 10 nomes
    cout << "Digite 10 nomes:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Nome " << (i + 1) << ": ";
        cin >> NOME[i]; // Lê e armazena o nome na posição i do vetor
    }

    // Algoritmo de ordenação (Bubble Sort) para colocar os nomes em ordem alfabética
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            // Compara o nome atual com o próximo usando operadores relacionais de string
            if (NOME[j] > NOME[j + 1]) {
                aux = NOME[j];         // Guarda o nome atual na variável auxiliar
                NOME[j] = NOME[j + 1]; // Move o próximo nome para a posição atual
                NOME[j + 1] = aux;     // Atribui o valor auxiliar na posição seguinte
            }
        }
    }

    // Imprime a listagem ordenada e numerada de 1 a 10
    cout << "\n--- LISTAGEM DE NOMES ORDENADOS ---\n";
    for (int i = 0; i < 10; i++) {
        cout << (i + 1) << " - " << NOME[i] << "\n"; // Exibe a numeração e o nome correspondente
    }

    return 0; // Termina o programa
}