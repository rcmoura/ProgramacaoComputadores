#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
	int i,j;
	char nome[5][40], x[40], letra;
	cout << "Leitura e apresentacao de nomes ordernados\n\n";
	
	// entrada dos nomes
	
	for (i=0; i<=4; i++)
	{
		cout << "Informar o "<<setw(2)<<i+1<<"o. nome";
		cin.getline(nome[i], sizeof(nome[i]));
	}
	cout << endl;
	
	for (i = 0; i <= 3; i++)
	{
		for (j = i + 1; j <= 4; j++)
		{
			if (strcmp(nome[i],nome[j])>0)
			{
				strcpy(x,nome[i]);
				strcpy(nome[i],nome[j]);
				strcpy(nome[j],x);
			}
		}
	}
	
	for (i=0; i<=4; i++)
	{
		cout <<setw(2)<<i+1<<" o. nome -> " << nome[i] << endl;
	}
	cout << "\nTecle <F> + <Enter> para finalizar o programa ";

  do
    {
      letra = cin.get();
      letra = toupper(letra);
    }
  while (letra != 'F');
  
}