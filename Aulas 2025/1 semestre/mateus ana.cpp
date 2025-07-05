#include <iostream>
using namespace std;

int main()
{
    int anos;
    float mateus, ana;
    mateus = 1.9;
    ana = 1.5;
    anos = 0;
    while (ana <= mateus)
          {
                 mateus = mateus + 0.01;
                 ana = ana + 0.03;
                 anos++;
          }
    cout << "\Sao necessarios " << anos << " anos para Ana Julia ficar maior que Mateus";
    cout << endl;
    system("Pause");
}
          
