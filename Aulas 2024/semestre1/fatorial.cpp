#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n, i = 1;
  long int fat = 1;
  cout << "\nprograma fatorial\n";
  cout << "\nfatorial de que valor: "; cin >> n;
  while (i <= n)
    {
       fat *= i;
       i++;
    }
  cout << "\n";
  cout << "fatorial de " << n << " = "<< fat << endl;
}