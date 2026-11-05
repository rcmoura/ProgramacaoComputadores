#include <iostream> // Inclui a biblioteca de entrada e saída
#include <string> // Inclui a biblioteca para string

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    string identificadorFamilia; // Variável para armazenar o identificador da família
    int qtdMeninas, qtdMeninos; // Variáveis para quantidade de crianças do sexo feminino e masculino

    double precoMenina = 12.0; // Preço do presente para menina (R$ 12,00)
    double precoMenino = 11.0; // Preço do presente para menino (R$ 11,00)

    double totalGastoMeninas = 0.0; // Acumulador para gasto total com meninas
    double totalGastoMeninos = 0.0; // Acumulador para gasto total com meninos

    int totalFamiliasCadastradas = 0; // Contador de famílias cadastradas
    int familiasBeneficiadas = 0; // Contador de famílias que possuem ao menos uma criança

    cout << "Digite o identificador da familia ('@' para encerrar): "; // Solicita o identificador
    cin >> identificadorFamilia; // Lê o identificador

    while (identificadorFamilia != "@") { // Laço executado até que o usuário digite '@'
        cout << "Digite a quantidade de criancas do sexo feminino: "; // Pede qtd de meninas
        cin >> qtdMeninas; // Lê qtd de meninas

        cout << "Digite a quantidade de criancas do sexo masculino: "; // Pede qtd de meninos
        cin >> qtdMeninos; // Lê qtd de meninos

        totalFamiliasCadastradas++; // Incrementa o total de famílias

        if (qtdMeninas > 0 || qtdMeninos > 0) { // Verifica se a família tem crianças
            familiasBeneficiadas++; // Incrementa o contador de famílias beneficiadas
        }

        totalGastoMeninas += qtdMeninas * precoMenina; // Acumula o custo dos presentes das meninas
        totalGastoMeninos += qtdMeninos * precoMenino; // Acumula o custo dos presentes dos meninos

        cout << "\nDigite o identificador da proxima familia ('@' para encerrar): "; // Solicita próximo
        cin >> identificadorFamilia; // Lê o novo identificador
    }

    cout << "\n--- Relatorio Final da ONG ---\n"; // Cabeçalho do relatório
    cout << "Total gasto com presentes para meninas: R$ " << totalGastoMeninas << "\n"; // Mostra gasto meninas
    cout << "Total gasto com presentes para meninos: R$ " << totalGastoMeninos << "\n"; // Mostra gasto meninos

    if (totalFamiliasCadastradas > 0) { // Verifica para evitar divisão por zero
        double percentualBeneficiadas = ((double)familiasBeneficiadas / totalFamiliasCadastradas) * 100.0; // Calcula a porcentagem
        cout << "Percentual de familias beneficiadas com presentes: " << percentualBeneficiadas << "%\n"; // Mostra o percentual
    } else {
        cout << "Nenhuma familia foi cadastrada.\n"; // Mensagem se nenhuma família foi cadastrada
    }

    return 0; // Termina o programa
}