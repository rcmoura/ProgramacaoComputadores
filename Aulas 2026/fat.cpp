#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int N, C;
  	long int FAT = 1;
 	cout << "\nPrograma Fatorial\n";
  	cout << "\nFatorial de que valor: "; cin >> N;
  	for (C = 1; C <= N; C++)
  	{
  		FAT = FAT * C;
	}
    cout << endl;
  	cout << "Fatorial de " << N << " = "<< FAT << endl;
}