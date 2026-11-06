#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Digite um numero: ";cin >> a;
    cout << "Digite um numero: ";cin >> b;
    if (a > b) 
		cout << "O maior e: " << a << endl;
    else if (b > a) 
		cout << "O maior e: " << b << endl;
    else 
		cout << "Sao iguais" << endl;
}