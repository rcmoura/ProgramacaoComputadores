#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float raio, perimetro, area, pi;
	pi = 3.1415;
	
	cout << "Entre com o Raio: "; cin >> raio;
	
	perimetro = 2 * pi * raio;
	area = pi * pow(raio,2);
	
	cout << "Perimetro ---> " << perimetro << endl;
	cout << "Area --------> " << area;
}