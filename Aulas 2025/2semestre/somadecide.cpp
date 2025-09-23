#include <iostream>
using namespace std;

int main()
{
	float A,B,TOTAL;
	cout << "ENTRE COM O 1o NUMERO:";
	cin >> A;
	cout << "ENTRE COM O 2o NUMERO:";
	cin >> B;
	TOTAL = A + B;
	if (TOTAL > B)
	{
		cout << "O RESULTADO: " << TOTAL;
	}
	else
	{
		cout << "O RESULTADO NÃO É MAIOR QUE B";
	}
}