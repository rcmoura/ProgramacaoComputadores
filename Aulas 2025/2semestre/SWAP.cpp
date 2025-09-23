#include <iostream>
using namespace std;

int main()
{
  int A, B, X;
  cout << "Entre o primeiro valor..: "; cin >> A;
  cout << "Entre o segundo valor...: "; cin >> B;
  cout << endl;
  if (A > B)
    {
      X = A;
      A = B;
      B = X;
    }
  cout << "Os valores ordenados sao: " << A << " e " << B;
  
}