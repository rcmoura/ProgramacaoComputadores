#include <iostream> // Inclui a biblioteca de entrada e saída
#include <string> // Inclui a biblioteca para manipulação de strings (nomes)

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    string nomeProduto; // Variável para armazenar o nome do produto
    int qtdProduzida, qtdVendida; // Variáveis para quantidade produzida e vendida
    int qtdEstoque; // Variável para calcular a quantidade em estoque

    string nomeMaiorEstoque = ""; // Variável para armazenar o nome do produto com maior estoque
    int maiorEstoque = -1; // Variável para armazenar o valor do maior estoque encontrado

    char continuar = 's'; // Variável de controle para o laço de repetição

    while (continuar == 's' || continuar == 'S') { // Laço para cadastrar vários produtos enquanto o usuário desejar
        cout << "Digite o nome do produto: "; // Pede o nome do produto
        cin >> nomeProduto; // Lê o nome do produto

        cout << "Digite a quantidade produzida: "; // Pede a quantidade produzida
        cin >> qtdProduzida; // Lê a quantidade produzida

        cout << "Digite a quantidade vendida: "; // Pede a quantidade vendida
        cin >> qtdVendida; // Lê a quantidade vendida

        qtdEstoque = qtdProduzida - qtdVendida; // Calcula o estoque atual (produzida menos vendida)

        cout << "\n--- Relatorio do Produto ---\n"; // Cabeçalho do relatório do produto
        cout << "Nome: " << nomeProduto << "\n"; // Mostra o nome
        cout << "Quantidade em estoque: " << qtdEstoque << "\n"; // Mostra o estoque

        if (qtdEstoque < 50) { // Verifica se o estoque é inferior a 50 itens
            cout << "Atencao: Este produto tem menos de 50 itens no estoque!\n"; // Exibe aviso de estoque baixo
        }

        if (qtdEstoque > maiorEstoque) { // Verifica se o estoque atual é maior que o maior registrado até o momento
            maiorEstoque = qtdEstoque; // Atualiza o valor do maior estoque
            nomeMaiorEstoque = nomeProduto; // Atualiza o nome do produto com maior estoque
        }

        cout << "\nDeseja cadastrar outro produto? (s/n): "; // Pergunta se deseja continuar
        cin >> continuar; // Lê a resposta
        cout << "\n"; // Linha em branco para organização
    }

    if (maiorEstoque != -1) { // Verifica se algum produto foi cadastrado
        cout << "Produto com maior estoque:\n"; // Exibe título
        cout << "Nome: " << nomeMaiorEstoque << " | Estoque: " << maiorEstoque << endl; // Mostra o resultado do maior estoque
    } else {
        cout << "Nenhum produto foi cadastrado." << endl; // Mensagem caso nenhum produto tenha sido inserido
    }

    return 0; // Termina o programa
}