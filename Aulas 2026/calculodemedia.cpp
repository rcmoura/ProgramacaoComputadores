// Programa para cadastro de alunos com cálculo de médias e ordenação alfabética

// Inclusão de bibliotecas necessárias
#include <iostream>   // Biblioteca para entrada e saída padrão
#include <iomanip>    // Biblioteca para manipulação de formatação de saída
#include <cctype>     // Biblioteca para funções de tipo de caractere
#include <cstring>    // Biblioteca para manipulação de strings
#include <cstdlib>    // Biblioteca para funções de conversão (atof)
using namespace std;  // Utiliza o namespace padrão

// Função principal do programa
int main(void)
{
  // ===== DEFINIÇÃO DE ESTRUTURAS E VARIÁVEIS =====
  
  // Definição da estrutura para armazenar dados do aluno
  struct CAD_ALUNO
    {
      char  NOME[40];    // Campo para armazenar o nome do aluno (até 40 caracteres)
      float NOTA[4];     // Vetor com 4 notas do aluno
      float MEDIA;       // Campo para armazenar a média calculada
    };

  // Declaração de variáveis
  struct CAD_ALUNO ALUNO[8], X;    // Vetor ALUNO com 8 posições e variável X para troca (ordenação)
  int I, J;                         // Variáveis inteiras para contadores de laços
  float SOMA_NT, SOMA_MD, MEDIA_GP; // Variáveis para somas e média geral
  char LETRA, ENTRANOTA[6];         // Variáveis auxiliares para entrada de dados
  
  // Configuração da formatação de saída
  cout << setprecision(2);           // Define precisão de 2 casas decimais para números reais
  cout << setiosflags(ios::fixed);   // Define o modo de notação fixa (não científica)

  // ===== ROTINA DE ENTRADA DE DADOS - CADASTRO DE ALUNOS E NOTAS =====
  
  cout << "Cadastro de alunos\n\n";   // Exibe o título do programa
  
  // Loop externo: itera de 0 a 7 para cadastrar 8 alunos
  for (I = 0; I <= 7; I++)
    {
      cout << "Informe o " << setw(2) << I + 1 << "o. nome: ";  // Exibe mensagem e número do aluno (1 a 8)
      cin.getline(ALUNO[I].NOME, sizeof(ALUNO[I].NOME));        // Lê o nome do aluno do teclado (até 40 caracteres)
      cout << endl;                   // Pula uma linha
      cout << "Entre as notas:\n" << endl;  // Exibe mensagem para entrada de notas
      
      // Loop interno: itera de 0 a 3 para cadastrar 4 notas por aluno
      for (J = 0; J <= 3; J++)
        {
           cout << setw(2) << J + 1 << "a. nota: ";  // Exibe "1a. nota:", "2a. nota:", etc
           cin.getline(ENTRANOTA, sizeof(ENTRANOTA));  // Lê a nota como string do teclado
           ALUNO[I].NOTA[J] = atof(ENTRANOTA);        // Converte a string para float e armazena no vetor de notas
        }
      cout << endl;                   // Pula uma linha
    }

  // ===== PROCESSAMENTO DO CÁLCULO DAS MÉDIAS =====
  
  SOMA_MD = 0;                       // Inicializa acumulador da soma das médias
  
  // Loop externo: processa os 8 alunos
  for (I = 0; I <= 7; I++)
    {
      SOMA_NT = 0;                   // Inicializa acumulador da soma de notas para este aluno
      
      // Loop interno: soma as 4 notas do aluno
      for (J = 0; J <= 3; J++)
        SOMA_NT = SOMA_NT + ALUNO[I].NOTA[J];  // Acumula cada nota
      
      ALUNO[I].MEDIA = SOMA_NT / 4;  // Calcula a média do aluno (soma de 4 notas dividido por 4)
      SOMA_MD = SOMA_MD + ALUNO[I].MEDIA;     // Acumula a média para cálculo posterior da média geral
    }
  
  MEDIA_GP = SOMA_MD / 8;            // Calcula a média geral (soma de 8 médias dividido por 8)

  // ===== CLASSIFICAÇÃO (ORDENAÇÃO) DOS DADOS =====
  // Utiliza o algoritmo Bubble Sort para ordenar os alunos em ordem alfabética pelo nome
  
  // Loop externo: controla as passagens de ordenação (0 a 6)
  for (I = 0; I <= 6; I++)
    // Loop interno: compara cada aluno com os seguintes (I+1 a 7)
    for (J = I + 1; J <= 7; J++)
      // strcmp retorna > 0 se ALUNO[I].NOME vem alfabeticamente após ALUNO[J].NOME
      if (strcmp(ALUNO[I].NOME, ALUNO[J].NOME) > 0)
        {
          X = ALUNO[I];              // Armazena o aluno da posição I em X (variável auxiliar)
          ALUNO[I] = ALUNO[J];       // Move o aluno J para a posição I
          ALUNO[J] = X;              // Move o aluno armazenado (de I) para a posição J (troca)
        }

  // ===== APRESENTAÇÃO DA TABELA COM NOME, NOTAS E MÉDIAS =====
  
  cout << endl;                              // Pula uma linha
  cout << "Relatorio Geral" << endl;         // Exibe o título do relatório
  cout << endl;                              // Pula uma linha
  
  // Configuração do cabeçalho da tabela (coluna ALUNO alinhada à esquerda)
  cout << setiosflags(ios::left);            // Define alinhamento à esquerda
  cout << setw(41) << "Aluno";               // Exibe "Aluno" com largura de 41 caracteres
  cout << resetiosflags(ios::left);          // Remove alinhamento à esquerda
  
  // Configuração das colunas de notas (alinhadas à direita)
  cout << setiosflags(ios::right);           // Define alinhamento à direita
  cout << setw( 7) << "Nota1";               // Exibe "Nota1" com largura de 7 caracteres
  cout << setw( 7) << "Nota2";               // Exibe "Nota2" com largura de 7 caracteres
  cout << setw( 7) << "Nota3";               // Exibe "Nota3" com largura de 7 caracteres
  cout << setw( 7) << "Nota4";               // Exibe "Nota4" com largura de 7 caracteres
  cout << setw( 7) << "Media";               // Exibe "Media" com largura de 7 caracteres
  cout << endl;                              // Pula uma linha
  cout << endl;                              // Pula outra linha
  
  // Loop para exibir os dados de cada aluno na tabela
  for (I = 0; I <= 7; I++)
    {
      cout << resetiosflags(ios::right);     // Remove alinhamento à direita
      cout << setiosflags(ios::left);        // Define alinhamento à esquerda para o nome
      cout << setw(41) << ALUNO[I].NOME;     // Exibe o nome do aluno com largura 41
      
      cout << resetiosflags(ios::left);      // Remove alinhamento à esquerda
      cout << setiosflags(ios::right);       // Define alinhamento à direita para as notas
      
      // Loop para exibir as 4 notas do aluno
      for (J = 0; J <= 3; J++)
        cout << setw( 7) << ALUNO[I].NOTA[J];  // Exibe cada nota com largura 7
      
      cout << setw( 7) << ALUNO[I].MEDIA;    // Exibe a média do aluno com largura 7
      cout << endl;                          // Pula uma linha para o próximo aluno
    }
  
  cout << endl;                              // Pula uma linha
  cout << setw(70) << "Media Geral = " << setw( 6) << MEDIA_GP;  // Exibe a média geral com formatação
  
  cout << endl;                              // Pula uma linha
  cout << endl;                              // Pula outra linha
  cout << "\nTecle <F> + <Enter> para finalizar o programa ";  // Exibe mensagem de finalização
  
  // Loop de espera: aguarda o usuário pressionar 'F' para sair
  do
    {
      LETRA = cin.get();                     // Lê um caractere do teclado
      LETRA = toupper(LETRA);                // Converte o caractere para maiúscula (A-Z)
    }
  while (LETRA != 'F');                      // Continua o loop enquanto não for 'F'
  
  return 0;                                  // Encerra o programa e retorna 0 (execução com sucesso)
}

  
  

/* ===== EXPLICAÇÃO GERAL DO FUNCIONAMENTO DO CÓDIGO =====

OBJETIVO DO PROGRAMA:
Este programa implementa um sistema de cadastro de alunos com cálculo de médias escolares e
exibição de um relatório geral ordenado alfabeticamente.

ETAPAS PRINCIPAIS:

1. DEFINIÇÃO DE ESTRUTURA:
   - Define uma estrutura CAD_ALUNO com campos para armazenar nome (string de 40 caracteres),
     4 notas (vetor de floats) e uma média calculada.

2. ENTRADA DE DADOS (Input):
   - Solicita ao usuário que insira dados de 8 alunos
   - Para cada aluno: nome e 4 notas (lidas como strings e convertidas para float)
   - Usa cin.getline() para leitura segura de strings e atof() para conversão

3. CÁLCULO DE MÉDIAS (Processing):
   - Para cada aluno: soma as 4 notas e divide por 4 para obter a média individual
   - Calcula a média geral: soma as 8 médias e divide por 8

4. ORDENAÇÃO ALFABÉTICA (Sorting):
   - Utiliza algoritmo Bubble Sort para ordenar os alunos pelo nome em ordem alfabética
   - Usa strcmp() para comparação de strings (compara caracteres ASCII)
   - Realiza trocas (swaps) quando necessário usando a variável X como auxiliar

5. APRESENTAÇÃO DO RELATÓRIO (Output):
   - Exibe uma tabela formatada com 70 caracteres de largura
   - Coluna 1: Nome do aluno (esquerda, 41 caracteres)
   - Colunas 2-5: 4 notas (direita, 7 caracteres cada)
   - Coluna 6: Média do aluno (direita, 7 caracteres)
   - Linhas: 8 alunos em ordem alfabética
   - Rodapé: Média geral de todos os alunos

FLUXO DE EXECUÇÃO:
Input (nomes e notas) ? Cálculo de médias ? Ordenação ? Exibição formatada ? Média Geral

RECURSOS UTILIZADOS:
- Estruturas (struct) para organização de dados
- Vetores para armazenar múltiplos alunos e notas
- Loops aninhados (for dentro de for)
- Funções de string (cin.getline, strcmp, atof)
- Formatação de saída (setw, setprecision, ios::left, ios::right, ios::fixed)
*/