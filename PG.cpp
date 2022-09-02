#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int dec, razao, termo;
	cout << "Entrar com 1o. Termo: "; cin >> termo;
	cout << "Entrar com a razao: "; cin >> razao;
	dec = termo * pow(razao,4) ;
	cout << endl;
	system("cls");
	cout << "O 5o. termo desta PG: " << dec << endl;
	system("pause");

	
}