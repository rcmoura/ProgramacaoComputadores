#include <iostream>
using namespace std;

int main()
{
    float a,b,c,aux,maior,intermediario,menor;
    cout << "Entre com 1o. numero--> "; cin >> a;
    cout << "Entre com 2o. numero--> "; cin >> b;
    cout << "Entre com 3o. numero--> "; cin >> c;
    if (a > b)
       {
            aux = a;
            a = b;
            b = aux;
       }
   if (a > c)
       {
            aux = a;
            a = c;
            c = aux;
       }
   if (b > c)
       {
            aux = b;
            b = c;
            c = aux;
       } 
   maior = c;
   intermediario = b;
   menor = a;
   cout << "\nMaior: " << maior;
   cout << "\nIntermediario: "<< intermediario;
   cout << "\nMenor: " << menor;
   system("Pause");
}