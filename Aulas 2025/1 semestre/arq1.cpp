#include <fstream>
using namespace std;

int main(void)
{
  ofstream ARQTXT;
  ARQTXT.open("ARQTXT.XXX", ios_base::trunc);
  ARQTXT.close();
  return 0;
}