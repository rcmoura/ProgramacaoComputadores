#include <iostream>
using namespace std;

int main()
{
    float l1, l2, l3;
    cout << "Lado 1: "; cin >> l1 ;
    cout << "Lado 2: "; cin >> l2 ;
    cout << "Lado 3: "; cin >> l3 ;
    if (l1 == l2) 
	{
        if (l2 == l3) 
		{
            cout << "Equilatero" << endl;
        } 
		else 
		{
            cout << "Nao e equilatero" << endl;
        }
    } 
	else 
	{
       cout << "Nao e equilatero" << endl;
    }
}