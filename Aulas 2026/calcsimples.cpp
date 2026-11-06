#include <iostream>
#include <string>
using namespace std;

int main()
{
	float x, y;
    char op;
    cout << "Numero 1: ";cin >> x;
    cout << "Operacao (+,-,*,/): ";cin >> op;
    cout << "Numero 2: ";cin >> y;
    if (op == '+') 
		cout << x + y << endl;
    else if (op == '-') 
		cout << x - y << endl;
    else if (op == '*') 
		cout << x * y << endl;
    else if (op == '/') 
	{
        if (y != 0) 
			cout << x / y << endl;
        else 
			cout << "Erro: Divisao por zero" << endl;
    }

}