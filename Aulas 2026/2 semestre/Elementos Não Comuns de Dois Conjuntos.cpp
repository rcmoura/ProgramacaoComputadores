#include <iostream> // Inclui a biblioteca de entrada e saída padrão

using namespace std; // Utiliza o namespace padrão

int main() {
    int conjuntoA[10]; // Declara o vetor A com 10 elementos
    int conjuntoB[20]; // Declara o vetor B com 20 elementos
    bool encontrado;   // Variável auxiliar para verificar existência em outro conjunto

    // Leitura dos elementos do primeiro conjunto (10 elementos)
    cout << "Digite os 10 elementos do primeiro conjunto:\n";
    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> conjuntoA[i]; // Armazena o valor no vetor conjuntoA
    }

    // Leitura dos elementos do segundo conjunto (20 elementos)
    cout << "\nDigite os 20 elementos do segundo conjunto:\n";
    for (int i = 0; i < 20; i++) {
        cout << "Elemento " << (i + 1) << ": ";
        cin >> conjuntoB[i]; // Armazena o valor no vetor conjuntoB
    }

    cout << "\n--- ELEMENTOS NAO COMUNS AOS DOIS CONJUNTOS ---\n";

    // Verifica e imprime os elementos que estão no conjunto A, mas NÃO estão no conjunto B
    cout << "Elementos exclusivos do primeiro conjunto (A):\n";
    for (int i = 0; i < 10; i++) {
        encontrado = false; // Assume inicialmente que o elemento não foi encontrado no conjunto B
        for (int j = 0; j < 20; j++) {
            if (conjuntoA[i] == conjuntoB[j]) {
                encontrado = true; // Se achou igual, marca como encontrado
                break;             // Interrompe a busca interna
            }
        }
        // Se após varrer o conjunto B o elemento não foi achado, ele não é comum
        if (!encontrado) {
            cout << conjuntoA[i] << " ";
        }
    }

    // Verifica e imprime os elementos que estão no conjunto B, mas NÃO estão no conjunto A
    cout << "\nElementos exclusivos do segundo conjunto (B):\n";
    for (int i = 0; i < 20; i++) {
        encontrado = false; // Assume inicialmente que o elemento não foi encontrado no conjunto A
        for (int j = 0; j < 10; j++) {
            if (conjuntoB[i] == conjuntoA[j]) {
                encontrado = true; // Se achou igual, marca como encontrado
                break;             // Interrompe a busca interna
            }
        }
        // Se após varrer o conjunto A o elemento não foi achado, ele não é comum
        if (!encontrado) {
            cout << conjuntoB[i] << " ";
        }
    }
    cout << "\n";

    return 0; // Termina o programa
}