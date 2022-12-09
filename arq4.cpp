#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
	int i;
	float a[10];
	ofstream arqbin;
	arqbin.open("matflo.dbc", ios_base::binary);
	for (i=0; i < 10; i++)
	{
		cout << "Digite o elemento " << setw(2) << i+1 << " - ";
		cin >> a[i];
	}
	arqbin.write(reinterpret_cast<char*>(&a), sizeof(a));
	arqbin.close();
}