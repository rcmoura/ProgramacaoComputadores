/* E1P que calcula a potência de um número base elevado a um expoente fornecido pelo usuário. */

#include <iostream>
using namespace std;

int main()
{
	double base; // Declaração da base
    int expoente,i; // Declaração do expoente
    double resultado = 1.0; // Inicializa o resultado como 1

    cout << "Digite a base: ";
    cin >> base; // Lê a base
    cout << "Digite o expoente: ";
    cin >> expoente; // Lê o expoente

    // Loop para calcular a potência
    for (i = 0; i < abs(expoente); i++) {
        resultado *= base; // Multiplica a base pelo resultado
    }

    // Se o expoente for negativo, inverte o resultado
    if (expoente < 0) {
        resultado = 1.0 / resultado; // Calcula o inverso
    }

    cout << base << " elevado a " << expoente << " é " << resultado << endl; // Exibe o resultado  
}