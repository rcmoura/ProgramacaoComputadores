#include <iostream>
using namespace std;

int main()
{
	int a, b, c, maior, intermediario, menor, aux;
	
	/*
	1.Entrada de Dados:
   - O programa solicita que o usuário digite três 
   números (a, b e c).
   - Esses números são armazenados nas variáveis
    `a`, `b` e `c`.
	*/
	
	cout << "Digite o 1o. numero: "; cin >> a;
	cout << "Digite o 2o. numero: "; cin >> b;
	cout << "Digite o 3o. numero: "; cin >> c;
	
	/*
	2.Ordenação:
   - Em seguida, o programa verifica as relações 
   entre esses números para determinar qual é o maior, 
   o intermediário e o menor.
   - Ele utiliza uma série de comparações e 
   trocas de valores para garantir que `a` 
   contenha o menor valor, `b` contenha o valor 
   intermediário e `c` 
   contenha o maior valor.
	*/
	
	if (a > b)
	{
		aux = a;
		a = b;
		b = aux;
	}
	if ( a > c)
	{
		aux = a;
		a = c;
		c = aux;
	}
	if (b > c)
	{
		aux = b;
		b = c;
		c = aux;
	}
	
	/*
	3. Saída:
   - Por fim, o programa exibe os resultados:
     - O maior número é impresso com a mensagem "Maior ->".
     - O número intermediário é impresso com a mensagem "Intermediario ->".
     - O menor número é impresso com a mensagem "Menor ->".
	*/
	
	maior = c;
	intermediario = b;
	menor = a;
	cout << "Maior ->" << maior << endl;
	cout << "Intermediario ->" << intermediario << endl;
	cout << "Menor ->" << menor << endl;
	
	/*
	Aqui está uma explicação mais detalhada das partes relevantes do código:
	- Comparação e Troca:
	  - As comparações são feitas usando estruturas condicionais (`if`).
	  - Se `a` for maior que `b`, seus valores são trocados.
	  - Se `a` for maior que `c`, seus valores também são trocados.
	  - Finalmente, se `b` for maior que `c`, seus valores são trocados.
	- Variáveis Auxiliares:
	  - A variável `aux` é usada para armazenar temporariamente valores durante 
	  as trocas.
	Em resumo, o programa organiza os três números de forma que 
	`menor <= intermediario <= maior`.
	*/	
}
