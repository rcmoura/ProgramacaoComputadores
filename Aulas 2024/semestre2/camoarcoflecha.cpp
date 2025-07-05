#include <iostream>
using namespace std;

int main()
{
	int p1, p2, p3, aux, soma, md;
	cout << "Digite os pontos do primeiro jogador: "; cin >> p1;
	cout << "Digite os pontos do segundo jogador: "; cin >> p2;
	cout << "Digite os pontos do terceiro jogador: "; cin >> p3;
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
		p3 = aux;
	}
	cout << "\n P1= " << p1 <<"\n P2= " << p2 << "\n P3= "<< p3;
	soma = p1 + p2 + p3;
	if (soma > 100)
	{
		md = soma / 3; 
		cout << "\n Media " << md;
	}
	else
	{
		cout << "\n Equipe desclassificada! ";
	}
	
}