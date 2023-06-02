#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float nota[5][4];
	int i, j;
	cout << "Leitura e apresentacao de notas\n";
	cout << setprecision(2);
	
	// entrada de dados
	
	for (i=0; i<=4; i++)
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
	
	for (i=0; i<=4; i++)
	{
		cout << "\n\nAs notas do " << setw(2);
		cout << i + 1 << "o. aluno sao:\n";
		for (j=0;j<=3;j++)
		{
			cout << "Nota: " << j + 1 << " = " << setw(8);
			cout << nota[i][j];
		}
	}
	cout << endl;
}