#include <iostream>
using namespace std;

int main()
{
	int hora, tminuto, minuto;
	cout << "Entre com a hora atual: ";cin >> hora;
	cout << "Entre com os minutos: ";cin >> minuto;
	tminuto =  hora * 60 + minuto;
	cout << "Ate agora se passaram: " << tminuto << " minutos";
	cout << endl;	
}
