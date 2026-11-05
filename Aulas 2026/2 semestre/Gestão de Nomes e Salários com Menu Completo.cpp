#include <iostream>  // Inclui a biblioteca de entrada e saída padrão
#include <string>    // Inclui a biblioteca para manipulação de strings
#include <iomanip>   // Inclui a biblioteca para formatação de saída (setw)

using namespace std; // Utiliza o namespace padrão

int main() {
    string nome[15];     // Vetor para armazenar os nomes de 15 pessoas
    double salario[15];  // Vetor para armazenar os salários de 15 pessoas
    int opcao;           // Variável para armazenar a opção do menu
    bool inserido = false; // Flag para controlar se os dados já foram inseridos

    // Laço do menu principal
    do {
        cout << "\n=============== MENU ===============\n";
        cout << "1 - INSERIR\n";
        cout << "2 - ORDENAR\n";
        cout << "3 - LISTAR\n";
        cout << "4 - PROCURAR\n";
        cout << "5 - SAIR\n";
        cout << "OPCAO: ";
        cin >> opcao; // Lê a opção escolhida

        // Tratamento da opção 1: INSERIR
        if (opcao == 1) {
            cout << "\nInserindo dados de 15 pessoas:\n";
            for (int i = 0; i < 15; i++) {
                cout << "Pessoa " << (i + 1) << "\n";
                cout << "Nome: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, nome[i]); // Lê o nome da pessoa
                cout << "Salario: ";
                cin >> salario[i]; // Lê o salário da pessoa
            }
            inserido = true; // Marca que o vetor foi preenchido
            cout << "Dados inseridos com sucesso!\n";

        } 
        // Tratamento da opção 2: ORDENAR (Ordena alfabeticamente por nome)
        else if (opcao == 2) {
            if (!inserido) {
                cout << "Erro: Insira os dados primeiro (Opcao 1).\n";
            } else {
                // Algoritmo Bubble Sort para ordenar os nomes e manter os salários correspondentes juntos
                for (int i = 0; i < 14; i++) {
                    for (int j = 0; j < 14 - i; j++) {
                        if (nome[j] > nome[j + 1]) {
                            // Troca os nomes
                            string aux_nome = nome[j];
                            nome[j] = nome[j + 1];
                            nome[j + 1] = aux_nome;
                            
                            // Troca os salários correspondentes
                            double aux_salario = salario[j];
                            salario[j] = salario[j + 1];
                            salario[j + 1] = aux_salario;
                        }
                    }
                }
                cout << "Dados ordenados alfabeticamente por nome com sucesso!\n";
            }

        } 
        // Tratamento da opção 3: LISTAR (Listagem tabulada)
        else if (opcao == 3) {
            if (!inserido) {
                cout << "Erro: Insira os dados primeiro (Opcao 1).\n";
            } else {
                cout << "\n--- LISTAGEM TABULADA DE PESSOAS E SALARIOS ---\n";
                // Cabeçalho da tabela com espaçamento formatado
                cout << left << setw(20) << "NOME" << " | " << right << setw(10) << "SALARIO" << "\n";
                cout << "----------------------------------------\n";
                
                // Exibe cada registro alinhado em colunas
                for (int i = 0; i < 15; i++) {
                    cout << left << setw(20) << nome[i] 
                         << " | R$ " << right << setw(10) << fixed << setprecision(2) << salario[i] << "\n";
                }
            }

        } 
        // Tratamento da opção 4: PROCURAR
        else if (opcao == 4) {
            if (!inserido) {
                cout << "Erro: Insira os dados primeiro (Opcao 1).\n";
            } else {
                string busca;
                bool achou = false; // Flag para saber se encontrou
                
                cout << "Digite o nome da pessoa que deseja procurar: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, busca); // Lê o nome a ser buscado

                // Percorre o vetor buscando correspondência de nome
                for (int i = 0; i < 15; i++) {
                    if (nome[i] == busca) {
                        cout << "\nRegistro Encontrado:\n";
                        cout << "Nome: " << nome[i] << " | Salario: R$ " << fixed << setprecision(2) << salario[i] << "\n";
                        achou = true;
                        break;
                    }
                }

                // Se não encontrar o nome informado
                if (!achou) {
                    cout << "Pessoa nao encontrada.\n";
                }
            }

        } 
        // Tratamento da opção 5: SAIR
        else if (opcao == 5) {
            cout << "Encerrando o programa...\n";

        } 
        // Tratamento para opções inválidas digitadas no menu
        else {
            cout << "Opcao invalida! Escolha uma opcao entre 1 e 5.\n";
        }

    } while (opcao != 5); // Continua rodando o menu até que a opção seja 5

    return 0; // Termina o programa
}