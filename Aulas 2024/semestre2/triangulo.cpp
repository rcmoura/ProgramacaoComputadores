#include <iostream>
using namespace std;
	
int main(void)
	{
	  float A, B, C;
	  cout << "Entre o lado <A>: "; cin >> A;
	  cout << "Entre o lado <B>: "; cin >> B;
	  cout << "Entre o lado <C>: "; cin >> C;
	  if (A<B+C and B<A+C and C<A+B)
	  {
	  	if (A==B and B==C)
	  	{
	  		cout << "Triangulo Equilatero";
		}
	    else
	    {
	    	if (A==B or A==C or C==B)
	    	{
	    		cout << "Triangulo Isosceles";
			}
	        else
	        {
	        	cout << "Triangulo Escaleno";
			}
		}
	  }
	  else
	  {
	  	cout << "Os valores fornecidos nao formam um triangulo";
	  }
	    
	
	}