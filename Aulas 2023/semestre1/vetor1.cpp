#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	float md[8], soma, media;
	int i;
	char letra;
	soma = 0;
	cout << "Calculo de media escolar" << endl;
	for (i = 0; i <= 7; i++)
	{
		cout << "Informe a " << i + 1 << "a. nota: ";cin >> md[i];
		soma = soma + md[i];
	}
	media = soma / 8;
	cout << endl <<"A media do grupo equivale a: " << media << endl;
	cout << endl <<"Tecle <F> + <Enter> para finalizar o programa-> ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}