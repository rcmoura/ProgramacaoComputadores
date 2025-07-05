// ESCOLA.H (C10EX14)
// Arquivo de cabecalho para as classes TESCOLAR e TALUNO

#ifndef __ESCOLA_H
#define __ESCOLA_H

class TESCOLAR
{
  public:
    int SALA;
    int SERIE;
};

class TALUNO: public TESCOLAR
{
  public:
    char  NOME[41];
    float NOTA[4];
    float MEDIA;
    float CMEDIA(void)
    {
      MEDIA = 0;
      for (int I = 0; I < 4; I++)
        MEDIA += NOTA[I];
      MEDIA /= 4;
      return MEDIA;
    }
};

#endif // __ESCOLA_H
