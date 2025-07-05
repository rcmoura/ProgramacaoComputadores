#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	// declaracao de variaveis
	float perimetro, area, diagonal, base, altura;
	
	// preparando a entrada e a saida de dados
	cout << "Entre com a base: "; cin >> base;
	cout << "Entre com a altura: "; cin >> altura;
	
	// processamentos dos calculos usadps no prg
	perimetro = 2*(base + altura);
	area = base * altura;
	diagonal = sqrt(pow(base,2) + pow(altura,2));
	
	// exibindo os dados em tela
	cout << "Perimetro ---> " << perimetro << endl;
	cout << "Area --------> " << area << endl;
	cout << "Diagonal ----> " << diagonal;
	
}