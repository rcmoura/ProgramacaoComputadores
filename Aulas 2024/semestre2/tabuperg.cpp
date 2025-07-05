#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int n, i, r, resp;
	resp = 1;
	while (resp == 1)
	{
		cout << "Entre com o valor da tabuada: "; cin >> n;
		cout << endl;
		for (i=1; i<=10; i++) // i=i+1
		{
			r = n * i;
			cout << setw(2) << n;
			cout << " X ";
			cout << setw(2) << i;
			cout << " = ";
			cout << setw(10) << r << endl;
		}
		cout << endl;
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO: "; cin >> resp;
	}
	

}