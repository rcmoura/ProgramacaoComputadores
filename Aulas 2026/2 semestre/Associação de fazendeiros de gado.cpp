#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int codigoFazenda; // Variável para o código da fazenda
    int codigoManada; // Variável para o código da manada
    int tipoManada; // Tipo da manada (1-vaca, 2-touro, 3-boi, 4-bezerro)
    int qtdCabecas; // Quantidade de cabeças na manada

    int totalFazendas = 0; // Contador do número total de fazendas
    int totalManadasAssociacao = 0; // Contador do total de manadas da associação

    // Acumuladores de cabeças por tipo na associação
    int totalCabecasVacaAssoc = 0;
    int totalCabecasTouroAssoc = 0;
    int totalCabecasBoiAssoc = 0;
    int totalCabecasBezerroAssoc = 0;
    int totalCabecasCorteAssoc = 0; // Cabeças prontas para o corte (considerando boi = tipo 3 e touro = tipo 2, ou apenas boi)

    cout << "Digite o codigo da fazenda (-1 para encerrar): "; // Pede o código da fazenda
    cin >> codigoFazenda; // Lê o código da fazenda

    while (codigoFazenda != -1) { // Laço executado até que o código da fazenda seja -1
        totalFazendas++; // Incrementa o número total de fazendas

        int totalCabecasFazendaVaca = 0; // Acumuladores locais da fazenda
        int totalCabecasFazendaTouro = 0;
        int totalCabecasFazendaBoi = 0;
        int totalCabecasFazendaBezerro = 0;
        int numManadasFazenda = 0; // Contador de manadas da fazenda atual

        cout << "Digite o codigo da manada: "; // Pede código da manada
        cin >> codigoManada; // Lê código da manada

        while (codigoManada != -1) { // Laço para várias manadas na mesma fazenda (usaremos uma condição de parada interna ou pediremos dados)
            // Nota: Para simplificar a lógica de encerramento da manada sem usar vetor, 
            // podemos pedir tipo e quantidade, e perguntar se deseja continuar as manadas desta fazenda.
            // Mas vamos seguir estritamente o fluxo onde se digita código da manada. 
            // Para encerrar manadas da fazenda, vamos assumir que se digitar tipo 0 ou quantidade 0 encerra, ou ler código da manada.
            // Vamos adotar: se digitar codigoManada == -999, encerra as manadas daquela fazenda.
            
            cout << "Digite o tipo da manada (1-vaca, 2-touro, 3-boi, 4-bezerro): "; // Pede o tipo
            cin >> tipoManada; // Lê o tipo

            cout << "Digite a quantidade de cabecas por manada: "; // Pede a quantidade
            cin >> qtdCabecas; // Lê a quantidade

            numManadasFazenda++; // Incrementa o número de manadas da fazenda
            totalManadasAssociacao++; // Incrementa o total de manadas da associação

            if (tipoManada == 1) {
                totalCabecasFazendaVaca += qtdCabecas; // Soma vacas da fazenda
                totalCabecasVacaAssoc += qtdCabecas; // Soma vacas da associação
            } else if (tipoManada == 2) {
                totalCabecasFazendaTouro += qtdCabecas; // Soma touros da fazenda
                totalCabecasTouroAssoc += qtdCabecas; // Soma touros da associação
                totalCabecasCorteAssoc += qtdCabecas; // Touros entram no corte
            } else if (tipoManada == 3) {
                totalCabecasFazendaBoi += qtdCabecas; // Soma bois da fazenda
                totalCabecasBoiAssoc += qtdCabecas; // Soma bois da associação
                totalCabecasCorteAssoc += qtdCabecas; // Bois entram no corte
            } else if (tipoManada == 4) {
                totalCabecasFazendaBezerro += qtdCabecas; // Soma bezerros da fazenda
                totalCabecasBezerroAssoc += qtdCabecas; // Soma bezerros da associação
            }

            cout << "Digite o codigo da proxima manada (ou -999 para ir para outra fazenda): "; // Próxima manada
            cin >> codigoManada; // Lê código da manada
        }

        cout << "\n--- Relatorio da Fazenda " << codigoFazenda << " ---\n"; // Relatório da fazenda
        cout << "Total de cabecas - Vacas: " << totalCabecasFazendaVaca << "\n";
        cout << "Total de cabecas - Touros: " << totalCabecasFazendaTouro << "\n";
        cout << "Total de cabecas - Bois: " << totalCabecasFazendaBoi << "\n";
        cout << "Total de cabecas - Bezerros: " << totalCabecasFazendaBezerro << "\n";
        cout << "Numero total de manadas desta fazenda: " << numManadasFazenda << "\n\n";

        cout << "Digite o codigo da proxima fazenda (-1 para encerrar tudo): "; // Pede nova fazenda
        cin >> codigoFazenda; // Lê nova fazenda
    }

    cout << "\n--- Relatorio Geral da Associacao ---\n"; // Relatório geral
    cout << "Numero total de fazendas: " << totalFazendas << "\n";
    cout << "Numero total de manadas da associacao: " << totalManadasAssociacao << "\n";
    cout << "Total de cabecas (Vacas) na associacao: " << totalCabecasVacaAssoc << "\n";
    cout << "Total de cabecas (Touros) na associacao: " << totalCabecasTouroAssoc << "\n";
    cout << "Total de cabecas (Bois) na associacao: " << totalCabecasBoiAssoc << "\n";
    cout << "Total de cabecas (Bezerros) na associacao: " << totalCabecasBezerroAssoc << "\n";
    cout << "Quantidade total de cabecas de gado prontas para o corte: " << totalCabecasCorteAssoc << endl;

    return 0; // Termina o programa
}