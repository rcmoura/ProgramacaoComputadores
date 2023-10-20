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
	
	struct cad_aluno // objeto
	{
		char nome[40];
		float nota [4];
		float media;
	};
	
	struct cad_aluno aluno[8], x;
	int i, j;
	float soma_nt, soma_md, media_gp;
	char letra, entranota[6];
	cout << setprecision(2);
	cout << setiosflags(ios::fixed);
	
	// Rotina para a entrada dos nomes e notas
	
	cout << "Cadastro de Alunos\n\n";
	for (i=0; i<=7; i++)
	{
		cout << "Informe o " << setw(2) << i + 1 << "o. nome: ";
		cin.getline(aluno[i].nome, sizeof(aluno[i].nome));
		cout << endl;
		cout << "Entre com as notas: \n" << endl;
		for (j=0; j<=3; j++)
		{
			cout << setw(2) << j + 1 << "a. nota: ";
			cin.getline(entranota, sizeof(entranota));
			aluno[i].nota[j] = atof (entranota);
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
			soma_nt = soma_nt + aluno[i].nota[j];
		}
		aluno[i].media = soma_nt / 4;
		soma_md = soma_md + aluno[i].media;
	}
	media_gp = soma_md / 8;
	
	// Classificação dos dados
	
	for (i=0; i<=6; i++)
	{
		for (j=i+1; j<=7; j++)
		{
			if (strcmp (aluno[i].nome, aluno[j].nome) > 0)
			{
				x = aluno[i];
				aluno[i] = aluno[j];
				aluno[j] = x;
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
		cout << setw(41) << aluno[i].nome;
		cout << resetiosflags(ios::left);
		cout << setiosflags(ios::right);
		for (j=0; j<=3; j++)
		{
			cout << setw(7) << aluno[i].nota[j];
		}
		cout << setw(7) << aluno[i].media;
		cout << endl;
	}
	cout << endl;
	cout << setw(70) << "Media Geral = " << setw(6) << media_gp;
	cout << endl; 
}