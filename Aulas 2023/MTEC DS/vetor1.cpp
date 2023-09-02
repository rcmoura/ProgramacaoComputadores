#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	float md[8], soma, media;
	int i;
	char letra;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	cout << "Calculo de media escola\n\n";
	soma = 0;
	for (i=0; i<=7; i++)
	{
		cout << "Informe a "<< i + 1 <<"a. nota: ";
		cin >> md[i];
		soma += md[i];
	}
	media = soma / 8;
	cout <<"\nA media do grupo equivale a: " << setw(8);
	cout << media << endl;
	cout << "\nTecla <F> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}