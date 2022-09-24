#include <iostream>
using namespace std;

int main()
{
    float a,b,c,l1,l2,l3,maior,lados;
    cout << "Entre com o 1o. lado - > "; cin>>l1;
    cout << "Entre com o 2o. lado - > "; cin>>l2;
    cout << "Entre com o 3o. lado - > "; cin>>l3;
    a = l1 + l2;
    b = l1 + l3;
    c = l3 + l2;
    if (a > l3 and b > l2 and c > l1)
       {
            if ( l1 > l2 and  l1 > l3)
               {
                    maior = l1 * l1;
                    lados = (l2 * l2) + (l3 * l3);
               }
            else
                if (l2 > l3)
                   {
                       maior = l2 * l2;
                       lados = (l1 * l1) + (l3 * l3);
                   }
                else
                    {
                       maior = l3 * l3;
                       lados = (l1 * l1) + (l2 * l2);
                    }
            if (maior == lados)
               {
                   cout << " Triangulo Retangulo " << endl;
               }
            else
                {
                if (maior > lados)
                   {
                     cout << " Triangulo Obtusangulo" << endl;
                   }
                else
                    {
                      cout << " Triangulo Acutangulo " << endl;
                    }
            }
       }
    else
    
        {
            cout << endl;
            cout << "Os valores fornecidos nao forma um triangulo";
            cout << endl;
        }
    system("Pause");
}
