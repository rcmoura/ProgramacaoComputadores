#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float a, b, c, diagonal;
	cout << "entre com a base: "; cin >> a;
	cout <<"entre com a altura: "; cin >> b;
	cout <<"entre com a profundidade: "; cin >> c;
	diagonal = sqrt(pow(a,2) + pow(b,2) + pow(c,2));
	cout <<"diagonal: "<<diagonal;
}