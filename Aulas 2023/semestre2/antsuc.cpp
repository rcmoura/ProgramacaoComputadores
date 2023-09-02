#include <iostream>
using namespace std;

int main()
{
	int ant, suc, num;
	cout << "Entre com um numero.: ";
	cin >> num;
	ant = num - 1;
	suc = num + 1;
	cout << "O sucessor de "<< num << " e -> " << suc << " e o antecessor e -> " << ant;
}
