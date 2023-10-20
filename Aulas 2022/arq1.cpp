#include <fstream>

using namespace std;

int main()
{
	ofstream arqtxt;
	arqtxt.open("arqtxt.txt", ios_base::trunc);
	arqtxt.close();
}