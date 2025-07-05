#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	cout << "10 decimal = " << dec << 10 << endl; 
	cout << "10 em octal = " << oct << 10 << endl;
	cout << "10 em Hexadecimal = " << hex << 10 << endl;
	cout << setiosflags(ios::uppercase);
	cout << "10 em octal = " << oct << 10 << endl;
	cout << "10 em Hexadecimal = " << hex << 10 << endl;
	cout << resetiosflags(ios::uppercase);
	cout << setiosflags(ios::showbase);
	cout << "10 em octal = " << oct << 10 << endl;
	cout << "10 em Hexadecimal = " << hex << 10 << endl;
}