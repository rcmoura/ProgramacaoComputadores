#include <iostream> // Inclui a biblioteca de entrada e saída

using namespace std; // Utiliza o namespace padrão

int main() { // Função principal
    int identificacao; // Variável para armazenar o número de identificação do boi
    double peso; // Variável para armazenar o peso do boi

    int idBoiMaisGordo = 0; // Armazena a ID do boi mais gordo
    double pesoMaisGordo = -1.0; // Armazena o peso do boi mais gordo (inicializado com valor baixo)

    int idBoiMaisMagro = 0; // Armazena a ID do boi mais magro
    double pesoMaisMagro = 999999.0; // Armazena o peso do boi mais magro (inicializado com valor muito alto)

    cout << "Digite o numero de identificacao do boi (numero menor ou igual a 0 para sair): "; // Solicita identificação
    cin >> identificacao; // Lê a identificação

    while (identificação <= 0 ? false : (identificacao > 0)) { // Laço rodando enquanto a identificação for maior que zero
        cout << "Digite o peso do boi: "; // Solicita o peso
        cin >> peso; // Lê o peso

        if (peso > pesoMaisGordo) { // Verifica se o peso atual é maior que o maior peso registrado
            pesoMaisGordo = peso; // Atualiza o peso do mais gordo
            idBoiMaisGordo = identificacao; // Atualiza a ID do mais gordo
        }

        if (peso < pesoMaisMagro) { // Verifica se o peso atual é menor que o menor peso registrado
            pesoMaisMagro = peso; // Atualiza o peso do mais magro
            idBoiMaisMagro = identificacao; // Atualiza a ID do mais magro
        }

        cout << "Digite o numero de identificacao do proximo boi (<= 0 para sair): "; // Solicita próxima ID
        cin >> identificacao; // Lê a nova ID
    }

    if (pesoMaisGordo != -1.0) { // Verifica se algum boi foi cadastrado
        cout << "\n--- Resultado dos Bois ---\n"; // Cabeçalho do resultado
        cout << "Boi mais gordo -> ID: " << idBoiMaisGordo << " | Peso: " << pesoMaisGordo << " kg\n"; // Mostra o mais gordo
        cout << "Boi mais magro -> ID: " << idBoiMaisMagro << " | Peso: " << pesoMaisMagro << " kg\n"; // Mostra o mais magro
    } else {
        cout << "Nenhum boi foi cadastrado." << endl; // Mensagem caso nenhum dado tenha sido inserido
    }

    return 0; // Termina o programa
}