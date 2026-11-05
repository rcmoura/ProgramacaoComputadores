#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    double massaInicial; // Variável para armazenar a massa inicial fornecida pelo usuário
    double massaAtual; // Variável para acompanhar a diminuição da massa
    int tempoSegundos; // Variável para contar o tempo total decorrido em segundos
    char continuar = 's'; // Variável para controlar repetição para várias massas

    while (continuar == 's' || continuar == 'S') { // Laço para calcular para várias massas
        cout << "Digite a massa inicial do material radioativo (em gramas): "; // Solicita a massa inicial
        cin >> massaInicial; // Lê a massa inicial

        massaAtual = massaInicial; // Inicializa a massa atual com o valor da massa inicial
        tempoSegundos = 0; // Zera o contador de tempo

        while (massaAtual >= 0.10) { // Laço que roda enquanto a massa for maior ou igual a 0,10 grama
            massaAtual = massaAtual - (massaAtual * 0.25); // Reduz 25% da massa atual
            tempoSegundos += 30; // Incrementa o tempo em 30 segundos a cada redução
        }

        cout << "Tempo necessario para a massa ficar menor que 0.10 grama: " << tempoSegundos << " segundos.\n"; // Mostra o resultado em segundos
        cout << "Isso equivale a " << (tempoSegundos / 60.0) << " minutos.\n\n"; // Mostra o equivalente em minutos

        cout << "Deseja calcular para outra massa? (s/n): "; // Pergunta se deseja continuar
        cin >> continuar; // Lê a resposta
        cout << "\n"; // Linha em branco
    }

    return 0; // Finaliza o programa
}