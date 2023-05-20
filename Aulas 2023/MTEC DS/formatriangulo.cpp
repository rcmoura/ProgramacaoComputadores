#include <iostream>
using namespace std;

 int main()
 {
 	int l1,l2,l3,a,b,c;
 	cout << "Entre com o 1o. lado-->  "; cin >> l1;
 	cout << "Entre com o 2o. lado-->  "; cin >> l2;
 	cout << "Entre com o 3o. lado-->  "; cin >> l3;
 	a = l1 + l2;
 	b = l1 + l3;
 	c = l3 + l2;
 	if ( a > l3 && b > l2 && c > l1)
	{
		cout << "A forma um triangulo";
	}
	else
	{
		cout << "Nao forma um triangulo";
	} 	
 }