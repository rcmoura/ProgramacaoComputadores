#include <iostream>  
#include <fstream>   // Inclui a biblioteca para manipulação de arquivos
#include <string>    // Inclui a biblioteca para manipulação de strings

using namespace std;  

// Estrutura para armazenar os dados de um contato
struct Contato {
    string nome;      // Nome do contato
    string telefone;  // Telefone do contato
};

// Declaração das funções utilizadas no programa
void adicionarContato();
void listarContatos();
void buscarContato();
void menu();

int main() {
    menu();  // Chama a função menu para iniciar o programa
    return 0;
}

// Função que exibe o menu e gerencia as opções escolhidas pelo usuário
void menu() {
    int opcao;  // Variável para armazenar a opção escolhida pelo usuário
    do {
        // Exibe o menu de opções
        cout << "Menu de Agenda\n";
        cout << "1. Adicionar Contato\n";
        cout << "2. Listar Contatos\n";
        cout << "3. Buscar Contato\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opcao: ";
        cin >> opcao;  // Lê a opção escolhida pelo usuário
        cin.ignore(); // Limpa o buffer do cin

        // Executa a função correspondente à opção escolhida
        switch (opcao) {
            case 1:
                adicionarContato();  // Chama a função para adicionar um contato
                break;
            case 2:
                listarContatos();  // Chama a função para listar os contatos
                break;
            case 3:
                buscarContato();  // Chama a função para buscar um contato
                break;
            case 4:
                cout << "Saindo...\n";  // Mensagem de saída
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";  // Mensagem de erro para opção inválida
        }
    } while (opcao != 4);  // Repete o loop até que a opção 4 (sair) seja escolhida
}

// Função para adicionar um contato ao arquivo
void adicionarContato() {
    Contato contato;  // Cria uma variável do tipo Contato
    ofstream arquivo("agenda.txt", ios::app);  // Abre o arquivo em modo de adição

    if (!arquivo) {  // Verifica se houve erro ao abrir o arquivo
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }

    // Lê os dados do contato
    cout << "Digite o nome: ";
    getline(cin, contato.nome);
    cout << "Digite o telefone: ";
    getline(cin, contato.telefone);

    // Escreve os dados do contato no arquivo
    arquivo << contato.nome << "," << contato.telefone << "\n";
    arquivo.close();  // Fecha o arquivo

    cout << "Contato adicionado com sucesso!\n";
}

// Função para listar todos os contatos do arquivo
void listarContatos() {
    Contato contato;  // Cria uma variável do tipo Contato
    ifstream arquivo("agenda.txt");  // Abre o arquivo em modo de leitura

    if (!arquivo) {  // Verifica se houve erro ao abrir o arquivo
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }

    cout << "Lista de Contatos:\n";
    // Lê e exibe os dados de cada contato no arquivo
    while (getline(arquivo, contato.nome, ',') && getline(arquivo, contato.telefone)) {
        cout << "Nome: " << contato.nome << ", Telefone: " << contato.telefone << "\n";
    }

    arquivo.close();  // Fecha o arquivo
}

// Função para buscar um contato específico pelo nome
void buscarContato() {
    Contato contato;  // Cria uma variável do tipo Contato
    ifstream arquivo("agenda.txt");  // Abre o arquivo em modo de leitura
    string nomeBusca;  // Variável para armazenar o nome a ser buscado
    bool encontrado = false;  // Variável para indicar se o contato foi encontrado

    if (!arquivo) {  // Verifica se houve erro ao abrir o arquivo
        cout << "Erro ao abrir o arquivo.\n";
        return;
    }

    cout << "Digite o nome do contato que deseja buscar: ";
    getline(cin, nomeBusca);

    // Lê os dados de cada contato no arquivo e verifica se o nome buscado corresponde
    while (getline(arquivo, contato.nome, ',') && getline(arquivo, contato.telefone)) {
        if (contato.nome == nomeBusca) {
            cout << "Contato encontrado: Nome: " << contato.nome << ", Telefone: " << contato.telefone << "\n";
            encontrado = true;  // Define a variável como true se o contato for encontrado
            break;  // Sai do loop
        }
    }

    if (!encontrado) {  // Se o contato não foi encontrado, exibe uma mensagem
        cout << "Contato nao encontrado.\n";
    }

    arquivo.close();  // Fecha o arquivo
}
