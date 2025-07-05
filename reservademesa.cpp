#include <iostream>  // Biblioteca padrão de entrada e saída
using namespace std; // Usa o espaço de nomes padrão std

int main() {
    int long mesa[30], i, qtde[30], lugares, codigo, lugmesa;  // Declara variáveis: "mesa" para os códigos das mesas, "i" como índice, "qtde" para lugares disponíveis por mesa, "lugares" para total, "codigo" para o código da mesa e "lugmesa" para lugares a reservar.
    
    for (i = 0; i < 30; i++) {  // Loop para inicializar mesas
        mesa[i] = 100 + i;       // Atribui códigos de 100 a 129 a cada posição do vetor mesa
        qtde[i] = 5;             // Inicializa cada mesa com 5 lugares disponíveis
    }
    
    lugares = 150;  // Total de lugares disponíveis no início

    cout << "\nEntre com codigo (100 - 129) ou 0 para terminar: "; 
    cin >> codigo;  // Solicita código da mesa ao usuário, ou 0 para encerrar

    while (codigo > 0 && lugares != 0) {  // Enquanto o código for válido e houver lugares disponíveis
        i = 0;  // Reinicia o índice
        while (codigo != mesa[i] && i < 29) {  // Busca a mesa pelo código no vetor
            i++;
        }
        
        if (codigo == mesa[i]) {  // Se o código da mesa foi encontrado
            cout << "\nQuantidade de lugares a reservar: "; 
            cin >> lugmesa;  // Solicita a quantidade de lugares para reservar
            
            if (qtde[i] >= lugmesa) {  // Verifica se há lugares suficientes na mesa selecionada
                qtde[i] = qtde[i] - lugmesa;  // Atualiza lugares disponíveis da mesa
                lugares = lugares - lugmesa;  // Atualiza o total de lugares disponíveis
            } else {
                cout << "\nNao ha lugares a reservar";  // Informa que não há lugares suficientes na mesa
            }
        } else {
            cout << "\nCodigo da mesa invalido!!";  // Informa que o código é inválido
        }

        cout << "\nEntre com codigo (100 - 129) ou 0 para terminar: "; 
        cin >> codigo;  // Solicita novamente o código para a próxima operação
    }
    
    if (lugares == 0) {  // Se todos os lugares foram ocupados
        cout << "\nLotacao esgotada!!";  // Informa que a lotação está completa
    } else {
        cout << "\nLugares vagos\n";  // Exibe as mesas com lugares ainda disponíveis
        for (i = 0; i < 30; i++) {
            if (qtde[i] != 0) {  // Verifica se há lugares restantes na mesa
                cout << "\nMesa: " << mesa[i] << " total de lugares: " << qtde[i];  // Exibe código da mesa e lugares restantes
            }
        }
    }
    
    cout << endl;
}
/*
Explicação Detalhada

Inicialização de Variáveis: O código cria um vetor mesa que armazena os códigos das mesas (de 100 a 129) e outro vetor qtde que armazena a quantidade de lugares disponíveis em cada mesa, inicialmente 5 para cada uma. A variável lugares representa o total de lugares disponíveis (150), codigo guarda o código da mesa inserido pelo usuário e lugmesa a quantidade de lugares solicitada para reserva.

Laço de Configuração Inicial: Um for inicializa cada elemento do vetor mesa com um código único, de 100 a 129, e cada elemento de qtde com o valor 5, configurando as mesas e os lugares disponíveis.

Entrada do Usuário: O programa solicita que o usuário insira o código da mesa (entre 100 e 129) ou 0 para finalizar.

Processamento da Reserva: Um while verifica se o código inserido é válido (não é 0) e se ainda há lugares disponíveis. Em seguida, outro while procura no vetor mesa até encontrar o código digitado pelo usuário.

Verificação de Disponibilidade: Ao localizar o código, o programa solicita ao usuário a quantidade de lugares a reservar. Verifica se há lugares suficientes na mesa selecionada:

Se houver, subtrai o número solicitado de qtde[i] (lugares na mesa) e de lugares (total).
Se não houver lugares suficientes, informa o usuário.
Repetição ou Encerramento: Após cada tentativa de reserva, o programa pede novamente o código da mesa, repetindo o processo até que o usuário insira 0 ou todos os lugares sejam reservados.

Exibição de Resultados:

Se lugares for zero, indica que a lotação está esgotada.
Caso contrário, exibe as mesas ainda com lugares disponíveis.
Conclusão: O programa finaliza exibindo as mesas restantes e o número de lugares vagos.
*/