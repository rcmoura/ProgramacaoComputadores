#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i, r, resp;
	do
	{
		cout << "Entre com o valor da Tabuada: "; cin >> n;
		cout << endl;
		i = 1;
		do
		{
			r = n * i;
			cout << setw(2) << n;
			cout << " X ";
			cout << setw(2) << i;
			cout << " = ";
			cout << setw(3) << r << endl;
			i++;
		}
		while (i <= 10);
		cout << endl;
		cout << "Deseja Continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO-> ";cin >> resp;
		}
		while (resp == 1);
}