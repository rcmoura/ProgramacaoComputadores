#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i, r, resp;
	resp=1;
	while (resp==1)
	{
			system("CLS");
			cout << "Entre com o valor da Tabuada: "; cin >> n;
			cout << endl;
			i = 0;
			while (i<=10)
			{
				r = n * i;
				cout << setw(2) << n;
				cout << " X ";
				cout << setw(2) << i;
				cout << " = ";
				cout << setw(3) << r << endl;
				i++;
			}
		cout << endl;
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO -> "; cin >> resp;
	}
}