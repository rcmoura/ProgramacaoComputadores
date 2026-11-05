#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal onde o programa inicia
    int numeroPedido; // Variável para armazenar o número do pedido
    int dia, mes, ano; // Variáveis para armazenar a data do pedido
    double precoUnitario; // Variável para armazenar o preço unitário do produto
    int quantidade; // Variável para armazenar a quantidade comprada
    double valorTotalPedido; // Variável para armazenar o valor total de um pedido específico
    double valorGeralCompras = 0.0; // Acumulador para o valor total de todas as compras

    cout << "Digite o numero do pedido (0 para sair): "; // Solicita ao usuário o número do pedido
    cin >> numeroPedido; // Lê o número do pedido digitado

    while (numeroPedido != 0) { // Inicia o laço de repetição que continua enquanto o número do pedido for diferente de zero
        cout << "Digite a data do pedido (dia mes ano separados por espaco): "; // Solicita a data
        cin >> dia >> mes >> ano; // Lê o dia, mês e ano

        cout << "Digite o preco unitario: "; // Solicita o preço unitário
        cin >> precoUnitario; // Lê o preço unitário

        cout << "Digite a quantidade: "; // Solicita a quantidade
        cin >> quantidade; // Lê a quantidade

        valorTotalPedido = precoUnitario * quantidade; // Calcula o valor total do pedido atual
        valorGeralCompras += valorTotalPedido; // Acumula o valor total geral

        cout << "O valor total deste pedido e: R$ " << valorTotalPedido << "\n\n"; // Exibe o valor do pedido atual

        cout << "Digite o numero do pedido (0 para sair): "; // Solicita o próximo número de pedido para continuar ou encerrar
        cin >> numeroPedido; // Lê o novo número do pedido
    }

    cout << "Processamento encerrado. O valor total de todas as compras e: R$ " << valorGeralCompras << endl; // Exibe o total geral ao finalizar

    return 0; // Retorna 0 indicando que o programa terminou com sucesso
}