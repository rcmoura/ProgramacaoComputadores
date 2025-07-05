/*E1P que calcula a média de N números fornecidos pelo usuário.*/

#include <iostream>
using namespace std;

int main()
{
	int N,i; // Declaração de N e número
    double soma, num; 
    soma = 0; // Inicializa soma como 0
    cout << "Quantos números você deseja calcular a média? ";
    cin >> N; // Lê o número de entradas

    for (i = 1; i <= N; i++) { // Loop para N entradas
        cout << "Digite o número " << i << ": ";
        cin >> num; // Lê o número
        soma += num; // Adiciona à soma
    }

    cout << "Média: " << (soma / N) << endl; // Calcula e exibe a média
    
}