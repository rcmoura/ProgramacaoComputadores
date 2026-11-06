#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, c, r, resp;
	resp = 1;
	while (resp==1)
	{
		cout << "Entre com o valor da tabuada.: "; cin >> n;
		cout << endl;
		//c = 1;
		for (c = 1; c <= 10; c++)
		{
			r = n * c;
			cout << setw(2) << n;
			cout << " X ";
			cout << setw(2) << c;
			cout << " = ";
			cout << setw(4) << r << endl;
		}
		cout << endl;
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO: "; cin >> resp;
		system("cls");
	}
}