#include <iostream>
using namespace std;

int main()
{
	int anos;
	float carlos, raul;
	raul = 1.9;
	carlos = 1.7;
	anos = 0;
	while( carlos <= raul )
	{
		raul = raul + 0.02;
		carlos = carlos + 0.03;
		anos++;
	}
	cout << "\nanos: " << anos;
}