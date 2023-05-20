#include <iostream>
using namespace std;

int main()
{
	int num;
	cout << "Entre com um valor: "; cin >> num;
	cout << endl;
	if (num >= 20 && num <=90)
	{
		cout << "O valor esta entre 20 e 90";
	}
	else
	{
		cout << "O valor não esta entre 20 e 90";
	}
}