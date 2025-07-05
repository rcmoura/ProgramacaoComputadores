#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int N, I, R, RESP;
  do
    {
      cout << "\nEntre o valor da tabuada: "; cin >> N;
      cout << "\n";
      I = 1;
      do
        {
          R = N * I;
          cout << setw(2) << N;
          cout << " X ";
          cout << setw(2) << I;
          cout << " = ";
          cout << setw(3) << R << endl;
          I++;
        }
      while (I <= 10);
      cout << "\n";
      cout << "Deseja continuar?" << endl;
      cout << "Tecle [1] para SIM / [2] para NAO: ";
      cin >> RESP;
    }
  while (RESP == 1);
}