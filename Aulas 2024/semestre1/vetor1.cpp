#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	float md[8], soma, media;
	int i;
	char letra;
	for (i=0; i<=7; i++)
	{
		cout << "Informe a " << i + 1 << "a. nota:";cin >> md[8];
		soma = soma + md[i]; // soma += md[i]
	}
	media = soma / 8;
	cout << "\nA media do grupo equivale a: " << media << endl;
	cout << "\nTecle <F> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}