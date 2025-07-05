/* E1P que gerencia o Triângulo de Pascal para N linhas. */

#include <iostream>
using namespace std;

int main()
{
	int N, linha, espacos, coluna, numero; 

    cout << "Quantas linhas do Triângulo de Pascal você deseja? ";
    cin >> N; // Lê o valor de N

    for (linha = 0; linha < N; linha++) { // Loop para cada linha
        	numero = 1; // Inicializa o primeiro número da linha

        for (espacos = 0; espacos < N - linha - 1; espacos++) // Loop para espaços em branco
            cout << " "; // Exibe espaços

        for (coluna = 0; coluna <= linha; coluna++) { // Loop para cada coluna na linha
            cout << numero << " "; // Exibe o número
            numero = numero * (linha - coluna) / (coluna + 1); // Calcula o próximo número
        }
        cout << endl; // Nova linha após cada linha do triângulo
    }
}