#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int i;
	char nome[5][40], letra;
	cout << "Leitura e apresentacao de nomes\n\n";
	
	// entrada dos nomes
	
	for (i=0; i<=4; i++)
	{
		cout << "Informar o "<<setw(2)<<i+1<<"o. nome";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	
	// apresentação dos nomes
	
	for (i=0; i<=4; i++)
	{
		cout <<setw(2)<<i+1<<"Nome-> " << nome[i] << endl;
	}
	
	cout << "\nTecle <F> + <Enter> para finalizar o programa ";

  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'F');
}