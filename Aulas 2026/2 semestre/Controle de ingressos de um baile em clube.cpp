#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int tipoIngresso; // Variável para o tipo de ingresso (1 para sócio, 2 para não-sócio)
    int qtdSocios = 0; // Contador de ingressos vendidos para sócios
    int qtdNaoSocios = 0; // Contador de ingressos vendidos para não-sócios
    int totalIngressosVendidos = 0; // Contador do total de ingressos vendidos
    int capacidadeMaxima = 2000; // Capacidade máxima do salão

    double valorSocio = 10.0; // Preço do ingresso de sócio
    double valorNaoSocio = 20.0; // Preço do ingresso de não-sócio

    double arrecadacaoSocios = 0.0; // Valor total arrecadado de sócios
    double arrecadacaoNaoSocios = 0.0; // Valor total arrecadado de não-sócios
    double arrecadacaoTotal = 0.0; // Arrecadação total geral

    cout << "Digite o tipo de ingresso (1 para Socio, 2 para Nao-Socio, -999 para sair): "; // Solicita o tipo
    cin >> tipoIngresso; // Lê o tipo de ingresso

    while (tipoIngresso != -999 && totalIngressosVendidos < capacidadeMaxima) { // Laço continua até -999 ou esgotar capacidade
        if (tipoIngresso == 1) { // Verifica se é sócio
            qtdSocios++; // Incrementa contador de sócios
            arrecadacaoSocios += valorSocio; // Adiciona ao valor arrecadado de sócios
            totalIngressosVendidos++; // Incrementa o total geral de ingressos
        } else if (tipoIngresso == 2) { // Verifica se é não-sócio
            qtdNaoSocios++; // Incrementa contador de não-sócios
            arrecadacaoNaoSocios += valorNaoSocio; // Adiciona ao valor arrecadado de não-sócios
            totalIngressosVendidos++; // Incrementa o total geral de ingressos
        } else {
            cout << "Tipo de ingresso invalido! Tente novamente.\n"; // Mensagem de erro para entrada inválida
        }

        if (totalIngressosVendidos >= capacidadeMaxima) { // Verifica se atingiu a capacidade máxima
            cout << "\nA capacidade maxima de 2000 pessoas foi atingida. Venda encerrada.\n"; // Aviso de lotação
            break; // Sai do laço
        }

        cout << "Digite o tipo de ingresso (1 para Socio, 2 para Nao-Socio, -999 para sair): "; // Solicita próximo
        cin >> tipoIngresso; // Lê o próximo tipo
    }

    arrecadacaoTotal = arrecadacaoSocios + arrecadacaoNaoSocios; // Calcula a arrecadação total

    cout << "\n--- Relatorio do Baile ---\n"; // Cabeçalho do relatório
    cout << "Quantidade de ingressos vendidos para socios: " << qtdSocios << "\n"; // Mostra qtd sócios
    cout << "Quantidade de ingressos vendidos para nao-socios: " << qtdNaoSocios << "\n"; // Mostra qtd não-sócios

    if (totalIngressosVendidos > 0) { // Evita divisão por zero
        double percentualSocios = ((double)qtdSocios / totalIngressosVendidos) * 100.0; // Calcula percentual de sócios
        cout << "Percentual de ingressos para socios em relacao ao total: " << percentualSocios << "%\n"; // Exibe percentual
    } else {
        cout << "Nenhum ingresso foi vendido.\n"; // Mensagem se nenhum ingresso foi vendido
    }

    cout << "Valor recebido de socios: R$ " << arrecadacaoSocios << "\n"; // Mostra valor de sócios
    cout << "Valor recebido de nao-socios: R$ " << arrecadacaoNaoSocios << "\n"; // Mostra valor de não-sócios
    cout << "Valor total arrecadado no baile: R$ " << arrecadacaoTotal << endl; // Mostra arrecadação total

    return 0; // Termina o programa
}