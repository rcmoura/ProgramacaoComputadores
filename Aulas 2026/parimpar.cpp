#include <iostream>
using namespace std;

int main() 
{
    // 1. Par ou Ímpar
    int num1;
    cout << "Digite um numero: "; cin >> num1;
    if (num1 % 2 == 0) 
	{
		cout << "Par" << endl;
	}
    else
	{
		cout << "Impar" << endl;
	}
}