#include <iostream>
using namespace std;

int main()
{
	int long mesa[30], i, qtde[30], lugares, codigo, lugmesa;
	
	for (i = 0; i < 30; i++) // loop para inicializar mesas
	{
		mesa[i] = 100 + i; // Atribui códigos de 100 a 129 a cada posição do vetor mesa
		qtde[i] = 5; // Inicializa cada mesa com 5 lugares disponiveis
	}
	
	lugares = 150; // Total de lugares disponíveis no início
	
	cout << "\nEntre com o codigo (100 - 129) ou 0 para terminar: ";
	cin >> codigo;
	
	while (codigo > 0 && lugares != 0) // Enquanto o código for válido e houver lugares disponíveis
	{
		i = 0; // Renicia o índice
		while (codigo != mesa[i] && i < 29) // busca pelo código no vetor
		{
			i++;
		}
		
		if (codigo == mesa[i]) // Se o código da mesa foi encontrado
		{
			cout << "\nQuantidade de lugares a reservar: ";
			cin >> lugmesa;
			
			if(qtde[i] >= lugmesa) // Verifica se há lugares suficiente na mesa selecionada
			{
				qtde[i] = qtde[i] - lugmesa; // Atualiza lugares disponíveis da mesa
				lugares = lugares - lugmesa; // Atualiza o total de lugares disponiveis
			}
			else
			{
				cout << "\nNao ha lugares a reservar";
			}
		}
		else
		{
			cout << "\nCodigo da mesa invalido!!";
		}
		
		cout << "\nEntre com o codigo (100 - 129) ou 0 para terminar: ";
		cin >> codigo;
	}
	
	if (lugares == 0) // Se todos os lugares foram ocupados
	{
		cout << "\nLotacao esgotada!!";
	}
	else
	{
		cout << "\nLugares vagos\n";
		for (i = 0; i < 30; i++)
		{
			if (qtde[i] != 0) // verifica se há lugares restantes ainda disponiveis
			{
				cout << "\nMesa: "<< mesa[i] << " total de lugares: " << qtde[i];
			}
		}
	}
	
	cout << endl;
	
}

/*
Explicação Detalhada

Inicialização de Variáveis: O código cria um vetor mesa que armazena os códigos 
das mesas (de 100 a 129) e outro vetor qtde que armazena a quantidade de lugares 
disponíveis em cada mesa, inicialmente 5 para cada uma. 
A variável lugares representa o total de lugares disponíveis (150), 
codigo guarda o código da mesa inserido pelo usuário e lugmesa a 
quantidade de lugares solicitada para reserva.

Laço de Configuração Inicial: Um for inicializa cada elemento do vetor 
mesa com um código único, de 100 a 129, e cada elemento de qtde com o 
valor 5, configurando as mesas e os lugares disponíveis.

Entrada do Usuário: O programa solicita que o usuário insira o código 
da mesa (entre 100 e 129) ou 0 para finalizar.

Processamento da Reserva: Um while verifica se o código inserido 
é válido (não é 0) e se ainda há lugares disponíveis. Em seguida, 
outro while procura no vetor mesa até encontrar o código digitado pelo usuário.

Verificação de Disponibilidade: Ao localizar o código, o programa 
solicita ao usuário a quantidade de lugares a reservar. Verifica se 
há lugares suficientes na mesa selecionada:

Se houver, subtrai o número solicitado de qtde[i] (lugares na mesa) 
e de lugares (total).
Se não houver lugares suficientes, informa o usuário.
Repetição ou Encerramento: Após cada tentativa de reserva, o 
programa pede novamente o código da mesa, repetindo o processo 
até que o usuário insira 0 ou todos os lugares sejam reservados.

Exibição de Resultados:

Se lugares for zero, indica que a lotação está esgotada.
Caso contrário, exibe as mesas ainda com lugares disponíveis.
Conclusão: O programa finaliza exibindo as mesas restantes e o número de lugares vagos.
*/