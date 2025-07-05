#include <iostream>
using namespace std;

int main()
{
	float nota1, nota2, media;
	int matricula;
	cout << "Digite a matricula: "; cin >> matricula;
	cout << "Digite a nota 1: "; cin >> nota1;=
	cout << "Digite a nota 2: "; cin >> nota2;
	media = (nota1 + nota2) / 2;
	if (media > 7)
	{
		cout << "Matricula: " << matricula << endl;
		cout << "Nota 1:" << nota1 << endl;
		cout << "Nota 2:" << nota2 << endl;
		cout << "Media :" << media << endl;
		cout << "Aprovado" ;
	}
	else
	{
		if (media < 3)
		{
			cout << "Matricula: " << matricula << endl;
			cout << "Nota 1:" << nota1 << endl;
			cout << "Nota 2:" << nota2 << endl;
			cout << "Media :" << media << endl;
			cout << "Retido" ;
		}
		else
		{
			cout << "Matricula: " << matricula << endl;
			cout << "Nota 1:" << nota1 << endl;
			cout << "Nota 2:" << nota2 << endl;
			cout << "Media :" << media << endl;
			cout << "Recuperacao" ;
		}
	}
	cout << endl;
}