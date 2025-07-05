
#include <iostream>
using namespace std;

int incremento(void);

int main(void)
{
  for(int I = 1; I <= 10; I++)
    incremento();
  return 0;
}

int incremento(void)
{
  static int R = 1;
  cout << R << endl;
  R++;
  return 0;
}