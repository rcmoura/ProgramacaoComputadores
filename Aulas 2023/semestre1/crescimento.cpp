#include <iostream>
using namespace std;

int main()
{
	int anos;
	float c, j;
	c = 1.5;
	j = 1.1;
	anos = 0;
	while (j <= c)
	{
		c = c + 0.02;
		j = j + 0.03;
		anos++;	
	}
	cout << "Total Anos: " << anos << endl;
}