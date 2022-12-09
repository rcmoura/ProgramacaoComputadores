#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char mensagem[51];
	ofstream arqtxt1;
	arqtxt1.open("arqtxt1.txt", ios_base::app);
	cout << "Informe uma mensagem com ate 50 caracteres " << endl;
	cout << "--> ";
	cin.getline(mensagem, sizeof(mensagem));
	arqtxt1 << mensagem << endl;
	arqtxt1.close();
}