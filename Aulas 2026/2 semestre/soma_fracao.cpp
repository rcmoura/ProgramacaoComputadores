#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int num1, den1; // Numerador e denominador da primeira fração
    int num2, den2; // Numerador e denominador da segunda fração
    int somaNum, somaDen; // Numerador e denominador do resultado da soma
    int inteiroMisto; // Parte inteira para o número misto

    cout << "Digite o numerador da primeira fracao: "; // Pede numerador 1
    cin >> num1; // Lê numerador 1
    cout << "Digite o denominador da primeira fracao: "; // Pede denominador 1
    cin >> den1; // Lê denominador 1

    cout << "Digite o numerador da segunda fracao: "; // Pede numerador 2
    cin >> num2; // Lê numerador 2
    cout << "Digite o denominador da segunda fracao: "; // Pede denominador 2
    cin >> den2; // Lê denominador 2

    if (den1 == den2) { // Verifica se os denominadores já são iguais
        somaDen = den1; // O denominador comum é o mesmo
        somaNum = num1 + num2; // Soma apenas os numeradores
    } else {
        somaDen = den1 * den2; // Reduz ao mesmo denominador multiplicando os dois
        somaNum = (num1 * den2) + (num2 * den1); // Ajusta os numeradores proporcionalmente e soma
    }

    cout << "\nSoma algebrica das fracoes: " << somaNum << "/" << somaDen << "\n"; // Imprime a fração resultante

    if (somaNum >= somaDen) { // Verifica se a fração é imprópria (numerador >= denominador)
        inteiroMisto = somaNum / somaDen; // Calcula a parte inteira do número misto
        int restoNum = somaNum % somaDen; // Calcula o novo numerador (resto da divisão)

        if (restoNum == 0) { // Verifica se a divisão é exata
            cout << "Representacao sob forma de numero inteiro/misto: " << inteiroMisto << endl; // Imprime apenas o número inteiro
        } else {
            cout << "Representacao sob forma de numero misto: " << inteiroMisto << " e " << restoNum << "/" << somaDen << endl; // Imprime o número misto completo
        }
    } else {
        cout << "A fracao e propria (numerador < denominador), portanto nao pode ser representada como numero misto.\n"; // Informa que não é imprópria
    }

    return 0; // Termina o programa
}