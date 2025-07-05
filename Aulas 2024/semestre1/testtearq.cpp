#include <fstream>
using namespace std;

int main()
{
	ofstream ARQTXT;
	ARQTXT.open("ARQTXT.txt", ios_base::trunc);
	ARQTXT.close();
}