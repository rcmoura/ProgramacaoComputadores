#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int idade; // Variável para armazenar a idade
    double altura; // Variável para armazenar a altura
    double peso; // Variável para armazenar o peso

    int contadorMais50 = 0; // Contador de pessoas com idade superior a 50 anos
    int contadorJovens = 0; // Contador de pessoas com idade entre 10 e 20 anos
    double somaAlturasJovens = 0.0; // Acumulador de altura dos jovens para cálculo da média
    int contadorPesoBaixo = 0; // Contador de pessoas com peso inferior a 40 kg
    int totalPessoas = 0; // Contador total de pessoas analisadas

    char continuar = 's'; // Variável de controle para o loop

    while (continuar == 's' || continuar == 'S') { // Laço para receber dados de várias pessoas
        cout << "Digite a idade da pessoa: "; // Pede a idade
        cin >> idade; // Lê a idade

        cout << "Digite a altura da pessoa (em metros, ex: 1.75): "; // Pede a altura
        cin >> altura; // Lê a altura

        cout << "Digite o peso da pessoa (em kg): "; // Pede o peso
        cin >> peso; // Lê o peso

        totalPessoas++; // Incrementa o total de pessoas analisadas

        if (idade > 50) { // Verifica se a idade é maior que 50
            contadorMais50++; // Incrementa o contador de maiores de 50 anos
        }

        if (idade >= 10 && idade <= 20) { // Verifica se a idade está entre 10 e 20 anos
            somaAlturasJovens += altura; // Soma a altura para a média
            contadorJovens++; // Incrementa o contador de jovens
        }

        if (peso < 40.0) { // Verifica se o peso é inferior a 40 quilos
            contadorPesoBaixo++; // Incrementa o contador de peso inferior a 40 kg
        }

        cout << "Deseja cadastrar outra pessoa? (s/n): "; // Pergunta se deseja continuar
        cin >> continuar; // Lê a resposta
        cout << "\n"; // Linha em branco
    }

    cout << "--- Resultados Finais ---\n"; // Cabeçalho de resultados
    cout << "Quantidade de pessoas com idade superior a 50 anos: " << contadorMais50 << "\n"; // Mostra o primeiro resultado

    if (contadorJovens > 0) { // Verifica se houve pessoas na faixa de 10 a 20 anos para evitar divisão por zero
        double mediaAlturas = somaAlturasJovens / contadorJovens; // Calcula a média das alturas
        cout << "Media das alturas das pessoas com idade entre 10 e 20 anos: " << mediaAlturas << " m\n"; // Mostra a média
    } else {
        cout << "Nenhuma pessoa com idade entre 10 e 20 anos foi cadastrada.\n"; // Mensagem caso não haja dados
    }

    if (totalPessoas > 0) { // Verifica se há pessoas cadastradas para evitar divisão por zero
        double porcentagemPeso = ((double)contadorPesoBaixo / totalPessoas) * 100.0; // Calcula a porcentagem
        cout << "Porcentagem de pessoas com peso inferior a 40 quilos: " << porcentagemPeso << "%\n"; // Mostra a porcentagem
    } else {
        cout << "Nenhuma pessoa foi cadastrada.\n"; // Mensagem se total for zero
    }

    return 0; // Termina o programa
}