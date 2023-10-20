#include <iostream>
#include <iomanip>
#include <cctype>
using namespace std;

float r, a, b;

int rotadicao();
int rotsubtracao();
int rotmultiplicacao();
int rotdivisao();
int entrada();
int saida();
int pausa();

int main()
{
	int opcao = 0;
	while (opcao !=5)
	{
		cout << setprecision(2);
		cout << setiosflags(ios::right);
		cout << setiosflags(ios::fixed);
		cout << endl;
		cout << "--------------------"<< endl;
		cout << "Programa Calculadora"<< endl;
		cout << "---Menu Principal---"<< endl;
		cout << "--------------------"<< endl;
		cout << endl;
		cout << "[1] - Adicao" << endl;
		cout << "[2] - Subtracao" << endl;
		cout << "[3] - Multiplicacao" << endl;
		cout << "[4] - Divisao" << endl;
		cout << "[5] - Fim de Programa" << endl;
		cout << endl;
		cout << "Escolha uma opcao"; cin >> opcao;
		if (opcao != 5)
		{
			switch (opcao)
			{
				case 1: rotadicao(); break;
				case 2: rotsubtracao(); break;
				case 3: rotmultiplicacao(); break;
				case 4: rotdivisao(); break;
			}
		}
	}
}

int entrada()
{
	cout << endl;
	cout << "Entre com o valor de [A]: "; cin >> a;
	cout << "Entre com o valor de [B]: "; cin >> b;
	return 0;
}

int saida()

{
	cout << endl;
	cout << "O resultado entre A e B = "<< setw(8);
	cout << r << endl;
	// pausa();
}

int rotadicao()
{
	cout << endl;
	cout << "Rotina de Adicao" << endl;
	cout << "----------------" << endl;
	entrada();
	r = a + b;
	saida();
	return 0;
}

int rotsubtracao()
{
	cout << endl;
	cout << "Rotina de Subtracao" << endl;
	cout << "-------------------" << endl;
	entrada();
	r = a - b;
	saida();
	return 0;
}

int rotmultiplicacao()
{
	cout << endl;
	cout << "Rotina de Multiplicacao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	r = a * b;
	saida();
	return 0;
}

int rotdivisao()
{
	cout << endl;
	cout << "Rotina de divisao" << endl;
	cout << "-----------------------" << endl;
	entrada();
	if (b == 0)
	{
		cout << endl;
		cout << "Erro de divisao" << endl;
	//	pausa();
	}
	else
	{
		r = a / b;
		saida();
	}

	return 0;
}

int pausa()
{
	char letra;
	cout << endl;
	cout << "Tecle <P> + <ENTER> para voltar ao menu... ";
	do
	{
		letra = cin.get();
		letra = toupper(letra);
	}
	while (letra != 'p');
	return 0;
}