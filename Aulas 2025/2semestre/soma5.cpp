#include <iostream>
using namespace std;

int main()
{
  int A, B, R, T;
  cout << "Entre o valor <A>: "; cin >> A;
  cout << "Entre o valor <B>: "; cin >> B;
  cout << endl;
  R = A + B;
  if (R >= 10)
  {
  	T = R + 5;
  	cout << "Resultado = " << T;
  }
    
  else
  {
  	T = R - 7
  	cout << "Resultado = " << T;
  }
    
}