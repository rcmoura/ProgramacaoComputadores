#include <iostream>
using namespace std;

int main()
{
	int codigo;
	cout << "Entre com o codigo de acesso: "; cin >> codigo;
	cout << endl;
	if (codigo == 1 || codigo == 2 || codigo == 3)
	{
		if (codigo ==1)
		{
			cout << "Foi acionado o codigo UM";
		}
		if (codigo ==2)
		{
			cout << "Foi acionado o codigo DOIS";
		}
		if (codigo == 3)
		{
			cout << "Foi acionado o codigo TRES";
		}	
	}
	else
	{
		cout << "Codigo Inavalido";
	}	
}