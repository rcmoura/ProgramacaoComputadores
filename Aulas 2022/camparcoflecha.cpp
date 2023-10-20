#include <iostream>
using namespace std;

int main()
{
	int p1,p2,p3,aux,soma,media;
	cout << "\nDigite os pontos do 1o jogador: ",cin >> p1;
	cout << "\nDigite os pontos do 2o jogador: ",cin >> p2;
	cout << "\nDigite os pontos do 3o jogador: ",cin >> p3;
	
	// camada de ordenação
	
	if (p1 > p2)
	{
		aux = p1;
		p1 = p2;
		p2 = aux;
	}
	if (p1 > p3)
	{
		aux = p1;
		p1 = p3;
		p3 = aux;
	}
	if (p2 > p3)
	{
		aux = p2;
		p2 = p3;
		p3= aux;
	}
	cout << "\nP1 = " << p1 << "\nP2 = " << p2 << "\nP3 = " << p3;
	soma = p1 + p2 + p3;
	if (soma > 100)
	{
		media = soma / 3;
		cout << "\nMedia = " << media;
	}
	else
	{
		cout << "\nEquipe desclassificada.";
	}
}