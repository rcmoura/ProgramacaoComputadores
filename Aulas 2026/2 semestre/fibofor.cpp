#include <iostream> 
using namespace std; 

int main() 
{
	int i, ant, atual, prox, termo; // Declara as variáveis: i para loop, ant para termo anterior, atual para termo atual, prox para próximo termo
	ant = 0; // Inicializa o termo anterior com 0, primeiro valor da sequência de Fibonacci
	atual = 1; // Inicializa o termo atual com 1, segundo valor da sequência de Fibonacci
	cout << "Sequencia de Fibonacci: ";cin >> termo; // Imprime a mensagem de introdução para a sequência de Fibonacci e lê o número de termos
	for (i = 0; i <= termo; i++) // Loop que se repete o número de vezes especificado pelo usuário
	{
		cout << "\n" << atual << " "; // Imprime o valor atual da sequência e quebra de linha antes dele
		prox = ant + atual; // Calcula o próximo termo somando o termo anterior com o termo atual
		ant = atual; // Atualiza o termo anterior para o valor atual
		atual = prox; // Atualiza o termo atual para o valor calculado de próximo termo
	}
	cout << endl; // Imprime uma nova linha no final da saída para finalizar o formato
}