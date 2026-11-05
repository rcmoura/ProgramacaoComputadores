#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float A, B, C, X;
  cout << "Entre o valor <A>: "; cin >> A;
  cout << "Entre o valor <B>: "; cin >> B;
  cout << "Entre o valor <X>: "; cin >> X;
  cout << "\n";
  if (!(X > 5))
    C = (A + B) * X;
  else
    C = (A - B) * X;
  cout << "O resultado de C equivale a: " << setw(5) << C << endl;
}