#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int num, suc;
	cout << "Digite um numero.: "; cin >> num;
	num = num + 1;
	suc = num % 61;
	cout << "Sucessor: " << suc;	
}