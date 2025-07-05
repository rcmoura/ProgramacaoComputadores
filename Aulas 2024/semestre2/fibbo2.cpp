/* E1P que gera a sequência de Fibonacci até que o usuário decida parar. */

#include <iostream>
using namespace std;

int main()
{
    int termos,i, a, b, proximo; // Declaração do número de termos
    cout << "Quantos termos da sequência de Fibonacci você deseja? ";
    cin >> termos; // Lê o número de termos

    a = 0; b = 1; // Inicializa os primeiros termos

    cout << "Sequência de Fibonacci: ";
    for ( i = 0; i < termos; i++) { // Loop para gerar os termos
        cout << a << " "; // Exibe o termo atual
        proximo = a + b; // Calcula o próximo termo
        a = b; // Atualiza a
        b = proximo; // Atualiza b
    }
    cout << endl; // Nova linha
}