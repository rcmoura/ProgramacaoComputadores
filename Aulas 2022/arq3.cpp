#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	char mensagem;
	ifstream arqtxt1;
	arqtxt1.open("arqtxt1.txt", ios_base::in);
	while (!arqtxt1.eof())
	{
		mensagem = arqtxt1.get();
		cout.put(mensagem);
	}
	arqtxt1.close();
}