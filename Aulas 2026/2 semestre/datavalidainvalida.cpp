#include <iostream>
using namespace std; 

int main()
{
    int data, ano, mes, dia, vd; // declara variáveis: data (ddmmaaaa), ano, mes, dia e vd (flag validade)
    cout << "\nData no formato ddmmaaaa: "; cin >> data; // solicita e lê a data como inteiro no formato ddmmaaaa
    dia = data / 1000000; // obtém o dia dividindo por 1.000.000 (remove mm e aaaa)
    mes = data % 1000000 / 10000; // obtém o mês: pega os 6 últimos dígitos e divide por 10.000 (remove aaaa)
    ano = data % 10000; // obtém o ano: resto dos 4 últimos dígitos
    if (ano >= 1) // verifica se o ano é pelo menos 1 (ano válido)
        {
            vd = 1; // assume que a data é válida até encontrar uma condição inválida
            if (mes > 12 || dia < 1 || dia > 31) // verifica limites básicos: mês até 12 e dia entre 1 e 31
                {
                    vd = 0; // marca inválido se algum limite básico for violado
                }
            else
                {
                    if ((mes==4 || mes == 6 || mes == 9 || mes == 11)&& dia > 30) // meses com 30 dias: abr, jun, set, nov
                        {
                            vd = 0; // inválido se nesses meses o dia for maior que 30
                        }
                    else
                        {
                            if (mes == 2) // tratamento específico para fevereiro
                                {
                                    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) // verifica ano bissexto
                                        {
                                            if (dia > 29) // em ano bissexto fevereiro tem até 29 dias
                                                {
                                                    vd = 0; // inválido se dia > 29
                                                }
                                        }
                                    else
                                        {
                                            if (dia > 28) // em ano não bissexto fevereiro tem até 28 dias
                                                {
                                                    vd = 0; // inválido se dia > 28
                                                }
                                        }
                                    
                                }
                                
                        }
                    
                    
                }
        }
    else
        {
            vd = 0; // ano < 1 é considerado inválido
        }
    
    if (vd == 0)
        {
            cout << "\nData Invalida"; // exibe mensagem para data inválida
        }
    else
        {
            cout << "\nData Valida"; // exibe mensagem para data válida
        }
    cout << endl; // imprime nova linha e finaliza saída
}
