#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	float nota[10][4];
	int i, j;
	char letra;
  	cout << "Leitura e apresentacao de notas\n";
  	cout << setprecision(2);
  	cout << setiosflags(ios::right);
  	cout << setiosflags(ios::fixed);
	
	// entrada de dados
	
	for (i=0; i<=9; i++)
	{
		cout << "\nInforme as notas do " << setw(2);
		cout << i + 1 << "o. aluno:\n\n";
		for (j=0; j<=3; j++)
		{
			cout << "Nota: " << j + 1 <<  " = ";
			cin >> nota[i][j];
		}
	}
	
	// apresentação dos dados
	
	for (i=0; i<=9; i++)
	{
		cout << "\nInforme as notas do " << setw(2);
		cout << i + 1 << "o. aluno:\n\n";
		for (j=0; j<=3; j++)
		{
			cout << "Nota: " << j + 1 <<  " = " << setw(8);
			cout << nota[i][j];
		}
	}
	cout << endl;
  	cout << "\nTecle <F> + <Enter> para finalizar o programa ";

  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'F');
}