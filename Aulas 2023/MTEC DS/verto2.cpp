#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int num[8], cont, i;
	char letra;
	cout << setprecision(2);
	cout << setiosflags(ios::right);
	cout << setiosflags(ios::fixed);
	cout << "Relacao de Numeros\n\n";
	cont = 0;
	for (i=0; i<=7; i++)
	{
		cout << "Informe a "<< i + 1 <<"o. numero: ";
		cin >> num[i];
		if (num[i]%6==0)
		{
			cont++;
		}
	}
	for (i=0; i<=7; i++)
	{
		cout << "\n"<< i + 1 <<"o. numero-> " << num[i];
	}
	cout <<"\nTotal de numeros multiplos de 6: " << setw(8);
	cout << cont << endl;
	cout << "\nTecla <F> + <ENTER> para finalizar o programa ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'F');
}