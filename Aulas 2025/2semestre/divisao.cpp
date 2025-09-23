#include <iostream>
using namespace std;

int main()
{
	// declarando as variaveis
	int dividendo, divisor, quoc, resto;
	// criando a visualização da pergunta e a entrada de dados
	cout << "Entre com o dividendo: "; cin >> dividendo;
	cout << "Entre com o divisor: "; cin >> divisor;
	quoc = dividendo / divisor;
	resto = dividendo % divisor;
	cout << "Dividendo -> " << dividendo << endl;
	cout << "Divisor -> " << divisor << endl;
	cout << "Quocioente -> " << quoc << endl;
	cout << "Resto -> " << resto << endl;
}