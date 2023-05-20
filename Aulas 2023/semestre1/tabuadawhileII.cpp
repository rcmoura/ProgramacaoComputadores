#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i, r, resp;
	resp = 1;
	do
	{
		cout << "Entre com o valor da tabuada-> "; cin >> n;
		system("cls");
		cout << "***** TABUADA *****" << endl;
		i = 0;
		do
		{
			r = n * i;
			cout << setw(5) << n;
			cout << " X ";
			cout << setw(5) << i;
			cout << " = ";
			cout << setw(8) << r << endl;
			i++;
		}
		while (i <= 10);
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO: "; cin >> resp;
	}
	while (resp == 1);

}