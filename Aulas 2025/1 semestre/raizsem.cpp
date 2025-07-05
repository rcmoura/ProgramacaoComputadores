#include <iostream>
using namespace std;

int main()
{
	int i, num, cont;
	cont = 0;
	i = 1;
	cout << "Digite numero positivo ou negativo para terminar: "; cin >> num;
	while(num > 0)
	{
		num = num - i;
		i = i + 2;
		cont++;
	}
	if (num == 0)
	{
		cout << "Raiz Quadrada: " << cont << endl;
	}
	else
	{
		cout << "Raiz Quadrada apoximada esta entre: "<< cont - 1 << " e " << cont;
	}
}