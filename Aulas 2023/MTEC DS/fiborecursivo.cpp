#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstdlib>
using namespace std;

double fibonacci (int t);

int main()
{
	int termo;
	double fibo;
	cout << "Digite o termo de fibonacci que deseja saber: "; cin >> termo;
	cin.ignore();
	if (termo == 0)
	{
		cout << "Nao existe termo 0!\n\n";
		main();
	}
	cout << "\nAguarde! Processando...\n\n";
	fibo = fibonacci (termo-1);
	cout << "O " << termo << "o. termo da sequencia de fibonacci e " << fibo << endl << endl;
	system("pause");
}

double fibonacci (int t)
{
	if (t==0 || t==1)
	{
		return 1;
	}
	else 
	{
		return fibonacci (t-1) + fibonacci (t-2);
	}
}
