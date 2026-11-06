#include <iostream>
#include <string>
using namespace std;

int main()
{
	string senha;
    cout << "Senha: ";
    cin >> senha;
    if (senha == "1234") 
		cout << "Acesso Permitido" << endl;
    else 
		cout << "Acesso Negado" << endl;
}