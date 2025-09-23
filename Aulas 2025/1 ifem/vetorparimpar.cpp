#include <iostream>
#include <cctype>
using namespace std;

int main()
{
	int l, num[15];
	for (l=0; l<=14; l++)
	{
		cout << "Digite.: " << l + 1 << "o. numero: ";cin >> num[l];
	}
	cout << "\n\n RELACAO DE NUMERO\n\n";
	for (l=0; l<=14; l++)
	{
		cout <<"\n " << l + 1 << " - " << num[l];
		if (num[l] % 2 == 0)
		{
			cout << "-> PAR";
		}
		else
		{
			cout << "-> IMPAR";
		}
	}
}