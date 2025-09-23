#include <iostream>
using namespace std;

int main()
{
	int i, resp;
	float n, r;
	resp = 1;
	while (resp == 1)
	{
		cout << "Entre com o valor da Tabuada: "; cin >> n;
		cout << endl;
		for (i=0; i <= 10; i++)
		{
			r = n * i;
			cout << n;
			cout << " X ";
			cout << i;
			cout << " = ";
			cout << r << endl;
		}
		cout << endl;
		cout << "Deseja continuar?" << endl;
		cout << "Tecle [1] para SIM / [2] para NAO: ";cin >> resp;
	}
	
}