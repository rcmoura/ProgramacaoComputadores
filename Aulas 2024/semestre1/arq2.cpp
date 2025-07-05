#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	char mensagem;
	ifstream ARQTXT;
	ARQTXT.open("ARQTXT.txt", ios_base::in);
	while (!ARQTXT.eof())
	{
		mensagem = ARQTXT.get();
		cout.put(mensagem);
	}
	ARQTXT.close();
}