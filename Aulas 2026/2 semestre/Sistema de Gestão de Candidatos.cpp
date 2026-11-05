#include <iostream> // Inclui a biblioteca de entrada e saída padrão
#include <string>    // Inclui a biblioteca para manipulação de strings

using namespace std; // Utiliza o namespace padrão

int main() {
    string nome[100];      // Vetor para armazenar o nome de 100 candidatos
    double nota[100];      // Vetor para armazenar a nota de 100 candidatos
    int opcao;             // Variável para armazenar a escolha do menu
    bool dados_lidos = false; // Flag para verificar se os dados já foram cadastrados

    // Laço do menu principal que se repete até que o usuário escolha sair
    do {
        cout << "\n================ MENU ================\n";
        cout << "1 - Ler notas e nomes de 100 candidatos\n";
        cout << "2 - Exibir media geral de todos os candidatos\n";
        cout << "3 - Exibir lista (nome e nota) em ordem decrescente\n";
        cout << "4 - Buscar candidato por nome\n";
        cout << "5 - Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao; // Lê a opção do menu

        // Estrutura de decisão para tratar cada opção do menu
        if (opcao == 1) {
            // Leitura dos nomes e notas dos 100 candidatos
            cout << "\nCadastrando 100 candidatos:\n";
            for (int i = 0; i < 100; i++) {
                cout << "Candidato " << (i + 1) << "\n";
                cout << "Nome: ";
                cin.ignore(); // Limpa o buffer do teclado
                getline(cin, nome[i]); // Lê o nome completo
                cout << "Nota: ";
                cin >> nota[i]; // Lê a nota do candidato
            }
            dados_lidos = true; // Marca que os dados foram preenchidos
            cout << "Dados cadastrados com sucesso!\n";

        } else if (opcao == 2) {
            // Exibir a média geral de todos os candidatos
            if (!dados_lidos) {
                cout << "Erro: Cadastre os candidatos primeiro (Opcao 1).\n";
            } else {
                double soma = 0; // Acumulador para a soma das notas
                for (int i = 0; i < 100; i++) {
                    soma += nota[i]; // Soma todas as notas
                }
                double media = soma / 100.0; // Calcula a média aritmética
                cout << "\nA media geral de todos os candidatos e: " << media << "\n";
            }

        } else if (opcao == 3) {
            // Exibir lista em ordem decrescente de nota
            if (!dados_lidos) {
                cout << "Erro: Cadastre os candidatos primeiro (Opcao 1).\n";
            } else {
                // Cria cópias locais dos vetores para ordenar sem alterar a ordem original de cadastro
                string temp_nome[100];
                double temp_nota[100];
                for (int i = 0; i < 100; i++) {
                    temp_nome[i] = nome[i];
                    temp_nota[i] = nota[i];
                }

                // Ordenação Bubble Sort em ordem decrescente baseada na nota
                for (int i = 0; i < 99; i++) {
                    for (int j = 0; j < 99 - i; j++) {
                        if (temp_nota[j] < temp_nota[j + 1]) {
                            // Troca as notas
                            double aux_nota = temp_nota[j];
                            temp_nota[j] = temp_nota[j + 1];
                            temp_nota[j + 1] = aux_nota;
                            // Troca os nomes correspondentes
                            string aux_nome = temp_nome[j];
                            temp_nome[j] = temp_nome[j + 1];
                            temp_nome[j + 1] = aux_nome;
                        }
                    }
                }

                // Exibe a lista ordenada de forma decrescente
                cout << "\n--- LISTA DE CANDIDATOS (ORDEM DECRESCENTE DE NOTA) ---\n";
                for (int i = 0; i < 100; i++) {
                    cout << (i + 1) << ". Nome: " << temp_nome[i] << " - Nota: " << temp_nota[i] << "\n";
                }
            }

        } else if (opcao == 4) {
            // Buscar candidato por nome
            if (!dados_lidos) {
                cout << "Erro: Cadastre os candidatos primeiro (Opcao 1).\n";
            } else {
                string busca_nome;
                bool encontrado = false; // Flag para rastrear se encontrou o candidato
                
                cout << "Digite o nome do candidato que deseja buscar: ";
                cin.ignore(); // Limpa o buffer
                getline(cin, busca_nome); // Lê o nome digitado

                // Varre o vetor procurando o nome correspondente
                for (int i = 0; i < 100; i++) {
                    if (nome[i] == busca_nome) {
                        cout << "\nCandidato Encontrado:\n";
                        cout << "Nome: " << nome[i] << " | Nota: " << nota[i] << "\n";
                        encontrado = true;
                        break; // Para a busca ao encontrar
                    }
                }

                // Se não encontrar, imprime a mensagem exata exigida pelo enunciado
                if (!encontrado) {
                    cout << "Candidato nao encontrado\n";
                }
            }

        } else if (opcao == 5) {
            cout << "Saindo do programa...\n"; // Encerra o sistema

        } else {
            cout << "Opcao invalida! Tente novamente.\n"; // Mensagem para opção de menu inválida
        }

    } while (opcao != 5); // Continua executando o menu enquanto a opção for diferente de 5

    return 0; // Termina o programa
}