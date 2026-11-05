#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int n, i, r, resp;
	resp = 1;
	while (resp == 1)
	{
		cout << "Entre o valor da tabuada: "; cin >> n;
		cout << endl;
		i = 0;
		do
		{
			r = n * i;
			cout << setw(2) << n;
			cout << " X ";
			cout << setw(2) << i;
			cout << " = ";
			cout << setw(10) << r << endl;
			i++;
	 	}
	 	while (i <= 10);
		cout << endl;
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO: ";
		cin >> resp;
 	}
}