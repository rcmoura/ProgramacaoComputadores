#include <iostream> // Inclui a biblioteca de entrada e saída padrão

using namespace std; // Utiliza o namespace padrão

int main() {
    int mesas_lugares[30];       // Vetor que armazena quantos lugares ocupados cada mesa tem (índice 0 a 29)
    int total_lugares_ocupados = 0; // Acumulador do total geral de lugares ocupados (máximo 150)
    int codigo_mesa, lugares_desejados; // Variáveis para armazenar a entrada do usuário
    int indice;                  // Variável auxiliar para calcular a posição no vetor

    // Inicializa todas as 30 mesas com 0 lugares ocupados
    for (int i = 0; i < 30; i++) {
        mesas_lugares[i] = 0;
    }

    // Laço principal do sistema de reservas que roda até acabar os lugares ou digitar 0
    while (total_lugares_ocupados < 150) {
        cout << "\nTotal de lugares ocupados no momento: " << total_lugares_ocupados << "/150\n";
        cout << "Digite o codigo da mesa (100 a 129) ou 0 para sair: ";
        cin >> codigo_mesa; // Lê o código da mesa desejada

        // Condição de término: se o usuário digitar 0
        if (codigo_mesa == 0) {
            cout << "Encerrando o sistema de reservas a pedido do usuario.\n";
            break; // Sai do laço while
        }

        // Validação se o código da mesa está dentro do intervalo permitido (100 a 129)
        if (codigo_mesa >= 100 && codigo_mesa <= 129) {
            indice = codigo_mesa - 100; // Converte o código da mesa (100-129) para o índice do vetor (0-29)

            cout << "Digite a quantidade de lugares desejados para esta mesa (Max 5 por mesa): ";
            cin >> lugares_desejados; // Lê a quantidade de assentos desejados

            // Verifica se a quantidade solicitada é válida e cabe na mesa (capacidade total = 5)
            if (lugares_desejados > 0 && (mesas_lugares[indice] + lugares_desejados) <= 5) {
                mesas_lugares[indice] += lugares_desejados;       // Atualiza os lugares ocupados na mesa específica
                total_lugares_ocupados += lugares_desejados;      // Atualiza o contador geral de lugares ocupados
                cout << "Reserva realizada com sucesso na mesa " << codigo_mesa << "!\n";
            } else {
                // Mensagem de erro caso a mesa ultrapasse a capacidade de 5 lugares ou o valor seja inválido
                cout << "Erro: Nao foi possível realizar a reserva. A mesa possui apenas " 
                     << (5 - mesas_lugares[indice]) << " lugares disponiveis.\n";
            }
        } else {
            cout << "Codigo de mesa invalido! Por favor, digite valores entre 100 e 129 ou 0 para sair.\n";
        }
    }

    // Mensagem exibida caso todos os 150 lugares tenham sido preenchidos
    if (total_lugares_ocupados >= 150) {
        cout << "\nTodos os 150 lugares da casa de espetaculo estao ocupados!\n";
    }

    return 0; // Termina o programa
}