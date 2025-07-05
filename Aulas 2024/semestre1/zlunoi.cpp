#include <iostream>
#include <iomanip>
#include <cctype>
#include <cstring>
#include <cstdlib>
#include "escola.h"
using namespace std;

int main(void)
{

  char LETRA, ENTRANOTA[6], ENTRASALA[3], ENTRASERIE[2], QUANT[15];
  float SOMA = 0;
  TALUNO ALUNO[5], X;

  cout << setprecision(2);
  cout << setiosflags(ios::fixed);

  // Rotina para a entrada dos dados

  cout << "Cadastro de alunos\n\n";
  cout << endl;
  for (int I = 0; I <= 4; I++)
    {
      cout << "Informe o " << setw(3) << I + 1 << "o. nome.....: ";
      cin.getline(ALUNO[I].NOME, sizeof(ALUNO[I].NOME));
      cout << "\nInforme a serie..........: ";
      cin.getline(ENTRASERIE, sizeof(ENTRASERIE));
      ALUNO[I].SERIE = atoi(ENTRASERIE);
      cout << "Informe a sala...........: ";
      cin.getline(ENTRASALA, sizeof(ENTRASALA));
      ALUNO[I].SALA = atoi (ENTRASALA);
      cout << "\nEntre as notas:\n" << endl;
      for (int J = 0; J <= 3; J++)
        {
           cout << setw(2) << J + 1 << "a. nota................: ";
           cin.getline(ENTRANOTA, sizeof(ENTRANOTA));
           ALUNO[I].NOTA[J] = atof(ENTRANOTA);
        }
      ALUNO[I].CMEDIA();
      cout << endl;
    }

  // Classificacao dos dados

  for (int I = 0; I < 4; I++)
    for (int J = I + 1; J < 5; J++)
      if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)
        {
          X = ALUNO[I];
          ALUNO[I] = ALUNO[J];
          ALUNO[J] = X;
        }

  // Apresentacao dos dados nome/notas/media

  cout << endl;
  cout << "Relatorio Geral" << endl;
  cout << endl;
  cout << setiosflags(ios::left);
  cout << setw(31) << "Aluno";
  cout << resetiosflags(ios::left);
  cout << setiosflags(ios::right);
  cout << setw( 5) << "Sala";
  cout << setw( 6) << "Serie";
  cout << setw( 7) << "Nota1";
  cout << setw( 7) << "Nota2";
  cout << setw( 7) << "Nota3";
  cout << setw( 7) << "Nota4";
  cout << setw( 7) << "Media";
  cout << endl;
  cout << endl;
  for (int I = 0; I <= 4; I++)
    {
      cout << resetiosflags(ios::right);
      cout << setiosflags(ios::left);
      cout << setw(31) << ALUNO[I].NOME;
      cout << resetiosflags(ios::left);
      cout << setiosflags(ios::right);
      cout << setw( 5) << ALUNO[I].SALA;
      cout << setw( 5) << ALUNO[I].SERIE;
      for (int J = 0; J <= 3; J++)
        cout << setw( 7) << ALUNO[I].NOTA[J];
      cout << setw( 7) << ALUNO[I].MEDIA;
      SOMA += ALUNO[I].MEDIA;
      cout << endl;
    }
  cout << endl;
  cout << setw(70) << "Media Geral = " << setw( 6) << SOMA / 5;
  cout << endl;
  cout << endl;
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";
  do
    {
      LETRA = cin.get();
      LETRA = toupper(LETRA);
    }

  while (LETRA != 'F');
  return 0;
}
