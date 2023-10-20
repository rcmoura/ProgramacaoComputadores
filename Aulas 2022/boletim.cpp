/* Manipulação de Dados */

#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
using namespace std;

int main()
{
	// Definicao de variaveis e configuração de ambiente
	
	int i, j, k;
	float y, soma_nt, soma_md, media_gp, nota[8][4], media[8];
	char nome[8][40], x[40], letra, entranota[6];
	cout << setprecision(2);
	cout << setiosflags(ios::fixed);
	
	// Rotina para a entrada dos nomes e notas
	
	cout << "Cadastro de Alunos\n\n";
	for (i=0; i<=7; i++)
	{
		cout << "Informe o " << setw(2) << i + 1 << "o. nome: ";
		cin.getline(nome[i], sizeof(nome[i]));
		cout << endl;
		cout << "Entre com as notas: \n" << endl;
		for (j=0; j<=3; j++)
		{
			cout << setw(2) << j + 1 << "a. nota: ";
			cin.getline(entranota, sizeof(entranota));
			nota[i][j] = atof (entranota);
		} 
		cout << endl;
	}
	
	// Processamento do calculo das medias
	
	soma_md = 0;
	for (i=0; i <= 7; i++)
	{
		soma_nt = 0;
		for (j=0; j <= 3; j++)
		{
			soma_nt = soma_nt + nota[i][j];
		}
		media[i] = soma_nt / 4;
		soma_md = soma_md + media[i];
	}
	media_gp = soma_md / 8;
	
	// Classificação dos dados
	
	for (i=0; i<=6; i++)
	{
		for (j=i+1; j<=7; j++)
		{
			if (strcmp(nome[i], nome[j]) > 0)
			{
				
				// Troca dos nomes
				
				strcpy(x, nome[i]);
				strcpy(nome[i], nome[j]);
				strcpy(nome[j], x);
				
				// Troca das notas bimestrais
				
				for (k=0; k<=3; k++)
				{
					y = nota[i][k];
					nota[i][k] = nota[j][k];
					nota[j][k] = y;
				}
				
				// Troca as medias
				
				y = media[i];
				media[i] = media[j];
				media[j] = y;
			}
		}
	}
	
	// Apresentação da tabela nome/notas/media
	
	cout << endl;
	cout << "Relatorio Geral" << endl;
	cout << endl;
	cout << setiosflags(ios::left);
	cout << setw(41) << "Aluno";
	cout << resetiosflags(ios::left);
	cout << setiosflags(ios::right);
	cout << setw(7) << "Nota1";
	cout << setw(7) << "Nota2";
	cout << setw(7) << "Nota3";
	cout << setw(7) << "Nota4";
	cout << setw(7) << "Media";
	cout << endl;
	cout << endl;
	for (i=0; i<=7; i++)
	{
		cout << resetiosflags(ios::right);
		cout << setiosflags(ios::left);
		cout << setw(41) << nome[i];
		cout << resetiosflags(ios::left);
		cout << setiosflags(ios::right);
		for (j=0; j<=3; j++)
		{
			cout << setw(7) << nota[i][j];
		}
		cout << setw(7) << media[i];
		cout << endl;
	}
	cout << endl;
	cout << setw(70) << "Media Geral = " << setw(6) << media_gp;
	cout << endl; 
}