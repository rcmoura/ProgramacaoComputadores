#include <iostream>  // Inclui a biblioteca de entrada e saída padrão
#include <string>    // Inclui a biblioteca para manipulação de strings

using namespace std; // Utiliza o namespace padrão para evitar o uso de std::

int main() {
    // Declaração dos vetores para armazenar os dados dos 30 produtos
    int codigo[30];          // Vetor para armazenar os códigos dos produtos
    string nome[30];         // Vetor para armazenar os nomes dos produtos
    int quantidade[30];      // Vetor para armazenar as quantidades em estoque
    double v_compra[30];     // Vetor para armazenar os valores de compra
    double v_venda[30];      // Vetor para armazenar os valores de venda
    
    int opcao, busca_cod;    // Variáveis para controle de menu e busca por código
    bool encontrado;         // Variável booleana para verificar se o produto foi achado

    // Laço para cadastrar os 30 produtos
    for (int i = 0; i < 30; i++) {
        cout << "\nCadastrando o produto " << (i + 1) << " de 30:\n";
        
        cout << "Digite o codigo do produto: ";
        cin >> codigo[i]; // Lê o código do produto na posição i
        
        cout << "Digite o nome do produto: ";
        cin.ignore(); // Limpa o buffer do teclado antes de ler a string
        getline(cin, nome[i]); // Lê o nome completo do produto
        
        cout << "Digite a quantidade em estoque: ";
        cin >> quantidade[i]; // Lê a quantidade
        
        cout << "Digite o valor de compra: ";
        cin >> v_compra[i]; // Lê o valor de compra
        
        cout << "Digite o valor de venda: ";
        cin >> v_venda[i]; // Lê o valor de venda
    }

    // Exibe o menu de opções para consulta
    cout << "\n--- MENU DE CONSULTA ---\n";
    cout << "1 - Listar todos os produtos\n";
    cout << "2 - Consultar produto por codigo\n";
    cout << "Escolha uma opcao: ";
    cin >> opcao; // Lê a opção escolhida pelo usuário

    if (opcao == 1) {
        // Bloco para listar todos os produtos cadastrados
        cout << "\n=== LISTAGEM DE TODOS OS PRODUTOS ===\n";
        for (int i = 0; i < 30; i++) {
            cout << "Codigo: " << codigo[i] << " | Nome: " << nome[i] 
                 << " | Qtd: " << quantidade[i] 
                 << " | Compra: R$ " << v_compra[i] 
                 << " | Venda: R$ " << v_venda[i] << "\n";
        }
    } else if (opcao == 2) {
        // Bloco para buscar um produto específico pelo código
        cout << "Digite o codigo do produto que deseja buscar: ";
        cin >> busca_cod; // Lê o código a ser buscado
        
        encontrado = false; // Inicializa a flag de busca como falsa
        
        // Percorre o vetor procurando pelo código correspondente
        for (int i = 0; i < 30; i++) {
            if (codigo[i] == busca_cod) {
                cout << "\nProduto encontrado!\n";
                cout << "Nome: " << nome[i] << "\n";
                cout << "Quantidade: " << quantidade[i] << "\n";
                cout << "Valor de Compra: R$ " << v_compra[i] << "\n";
                cout << "Valor de Venda: R$ " << v_venda[i] << "\n";
                encontrado = true; // Marca como encontrado
                break; // Encerra o laço assim que encontra
            }
        }
        
        // Caso o produto não seja encontrado no vetor
        if (!encontrado) {
            cout << "Produto com o codigo " << busca_cod << " nao foi encontrado.\n";
        }
    } else {
        cout << "Opcao invalida!\n"; // Mensagem para opção inválida no menu
    }

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}