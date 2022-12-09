#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int i;
	float a[10];
	fstream arquivo("number.dat", ios_base::out | ios_base::binary);
	arquivo.read(reinterpret_cast<char*>(&a), sizeof(a));
	for (i=0; i < 10; i++)
	{
		cout << "Elemento " << setw(2) << i+1 << " = ";
		cout << a[i] << endl;
	}
	
	arquivo.close();
}