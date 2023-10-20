#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

int main()
{
	int n[4][4],l,c,t;
	for (l = 0; l <= 3; l++)
	{
		for (c = 0; c <= 3; c++)
		{
			cout << "\nEntre com elemento linha "<<l+1<<" coluna "<<c+1;
			cin >> n[l][c];
		}
	}
	cout << "\nDIAGONAL PRINCIPAL\n";
		for (l = 0; l <= 3; l++)
	{
		cout << n[l][l] << endl;
		for (t = 0; t <= l; t++)
		{
			cout << "\t";
		}
	}
	cout << endl;
}