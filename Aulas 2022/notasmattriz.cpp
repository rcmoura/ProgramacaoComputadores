#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	float nota[5][4];
	int l,c;
	char letra;
	
	cout << "Leitura e apresentacao das notas\n";
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	
	// Entrada das notas
	
	for (l=0;l<=4;l++)
	{
		cout << "\nInforme as notas do " << setw(2);
		cout << l + 1 << "o. aluno: \n\n";
		for (c=0;c<=3;c++)
		{
			cout << "Nota: " << c + 1 << " = ";
			cin >> nota[l][c];
		}
	}
	cout << endl;
	
	// Apresentação da notas
	
		for (l=0;l<=4;l++)
	{
		cout << "\n\nAs notas do " << setw(2);
		cout << l + 1 << "o. aluno sao: \n";
		for (c=0;c<=3;c++)
		{
			cout << "\nNota: " << c + 1 << " = " << setw(8);
			cout << nota[l][c];
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