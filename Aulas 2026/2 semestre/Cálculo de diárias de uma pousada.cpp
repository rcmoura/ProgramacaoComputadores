#include <iostream> // Inclui a biblioteca de entrada e saída
#include <string> // Inclui a biblioteca para strings

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    string nomeCliente; // Variável para o nome do cliente
    int numeroConta; // Variável para o número da conta
    int numeroDias; // Variável para o número de dias hospedados
    double valorDiaria = 30.0; // Preço fixo da diária (R$ 30,00)
    double taxaServicos; // Variável para a taxa de serviços diários
    double totalConta; // Variável para armazenar o valor total da conta do cliente
    double totalGanhoPousada = 0.0; // Acumulador para o faturamento total da pousada

    cout << "Digite o numero da conta do cliente (0 para encerrar): "; // Solicita o número da conta
    cin >> numeroConta; // Lê o número da conta

    while (numeroConta != 0) { // Laço executado enquanto o número da conta for diferente de zero
        cout << "Digite o nome do cliente: "; // Solicita o nome do cliente
        cin >> nomeCliente; // Lê o nome

        cout << "Digite o numero de dias de hospedagem: "; // Solicita o número de dias
        cin >> numeroDias; // Lê os dias

        if (numeroDias < 10) { // Verifica se o número de dias é menor que 10
            taxaServicos = 15.0; // Taxa de serviço é R$ 15,00 por dia
        } else {
            taxaServicos = 8.0; // Taxa de serviço é R$ 8,00 por dia se for maior ou igual a 10
        }

        totalConta = (numeroDias * valorDiaria) + (numeroDias * taxaServicos); // Calcula o valor total da conta
        totalGanhoPousada += totalConta; // Acumula o valor no total ganho pela pousada

        cout << "\n--- Conta do Cliente ---\n"; // Cabeçalho do recibo
        cout << "Nome: " << nomeCliente << "\n"; // Imprime o nome
        cout << "Numero da conta: " << numeroConta << "\n"; // Imprime o número da conta
        cout << "Valor total da conta: R$ " << totalConta << "\n\n"; // Imprime o valor da conta

        cout << "Digite o numero da conta do proximo cliente (0 para encerrar): "; // Solicita próximo dado
        cin >> numeroConta; // Lê a nova conta
    }

    cout << "\nTotal geral ganho pela pousada: R$ " << totalGanhoPousada << endl; // Exibe o faturamento total final

    return 0; // Termina o programa
}