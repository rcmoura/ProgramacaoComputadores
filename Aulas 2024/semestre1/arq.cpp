#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char mensagem[51];
	ofstream ARQTXT;
	ARQTXT.open("ARQTXT.txt", ios_base::app);
	cout << "Informe uma mensagem com ate 50 caracteres" << endl;
	cout << "--> ";
	cin.getline(mensagem, sizeof(mensagem));
	ARQTXT << mensagem << endl; 
	ARQTXT.close();
}