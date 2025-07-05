/* E1P que exibe todos os números pares de 1 a N. */

#include <iostream>
using namespace std;

int main()
{
	 int N,i; // Declaração de N

    cout << "Digite um número: ";
    cin >> N; // Lê o valor de N

    for (i = 1; i <= N; i++) { // Loop de 1 até N
        if (i % 2 == 0) { // Verifica se i é par
            cout << i << " "; // Exibe o número par
        }
    }
    cout << endl; // Nova linha
    
}