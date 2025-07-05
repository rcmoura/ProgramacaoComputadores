#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	
	cout << setiosflags(ios::fixed);
	
	float p1 = 7.0/3.0;
	double p2 = 7.0/3.0;
	long double p3 = 7.0/3.0;
	
	float r1 = 10.0/9.0;
	double r2 = 10.0/9.0;
	long double r3 = 10.0/9.0;
	
	cout << setprecision(6);
	cout << p1 << endl;
	cout << setprecision(15);
	cout << p2 << endl;
	cout << p3 << endl;
	
	cout << endl;
	
	cout << setprecision(6);
	cout << r1 << endl;
	cout << setprecision(15);
	cout << r2 << endl;
	cout << r3 << endl;
}