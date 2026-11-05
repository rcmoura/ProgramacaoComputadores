/* A série de RICCI difere da série de FIBONACCI porque os dois 
primeiros termos são fornecidos pelo usuário. Os demais termos 
são gerados da mesma forma que a série de FIBONACCI. Elabore um 
programa que imprima os n primeiros termos da série de RICCI e a 
soma dos termos impressos, sabendo-se que para existir esta série 
serão necessários pelo menos três termos.*/

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