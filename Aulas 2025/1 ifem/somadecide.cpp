#include <iostream>
using namespace std;

int main()
{
	int NUM1, NUM2, NUM;
	cout << "ENTRE COM UM NUMERO: ";
	cin >> NUM1;
	cout << "ENTRE COM OUTRO NUMERO: ";
	cin >> NUM2;
	NUM = NUM1 + NUM2;
	if (NUM >= 10) 
	{
		cout << "NUMERO E MAIOR OU IGUAL A 10";
	}
	else
	{
		cout << "ESSE NUMERO NaO E MAIOR QUE 10";
	}
}