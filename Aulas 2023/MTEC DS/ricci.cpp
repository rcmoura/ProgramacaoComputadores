#include <iostream>
using namespace std;

int main()
{
	int t1, t2, i, n, termo, soma;
	cout << "Entre com o 1o termo: "; cin >> t1;
	cout << "Entre com o 2o termo: "; cin >> t2;
	cout << "Entre com o numero de termos: "; cin >> n;
	soma = t1 + t2;
	if (n >= 3)
	{
		cout << endl << t1 << " " << t2 << " ";
		for (i = 1;i <= n-2;i++)
		{
			termo = t1 + t2;
			t1 = t2;
			t2 = termo;
			cout << termo << " ";
			soma = soma + termo;
		}
		cout << "A soma dos termos: "<< soma;
	}
	else
	{
		cout << endl << "Nao tem serie" << endl;
	}
}