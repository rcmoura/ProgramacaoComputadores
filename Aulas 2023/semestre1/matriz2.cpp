#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float nota[10][4];
	int i, j;
	cout << "Leitura e apresentacao de notas\n";
	cout << setprecision(2);
	
	// entrada de dados
	
	for (i=0; i<=9; i++)
	{
		cout << "\nInforme as notas do " << setw(2);
		cout << i + 1 << "o. aluno\n\n";
		for (j=0;j<=3;j++)
		{
			cout << "Nota: " << j + 1 << " = ";
			cin >> nota[i][j];
		}
	}
	cout << endl;
	
	// apresentação da notas
	
	cout << setw(6) << "Aluno";
	cout << setw(9) << "Nota1";
	cout << setw(9) << "Nota2";
	cout << setw(9) << "Nota3";
	cout << setw(9) << "Nota4";
	cout << endl;
	cout << endl;	
	for (i=0; i<=9; i++)
	{
		cout << setw(6) << i + 1;
		for (j=0;j<=3;j++)
		{
			cout << setw(9) << nota[i][j];
		}
		cout << endl;
	}
	
}