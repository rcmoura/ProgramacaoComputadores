#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num, p , num1;
    num1 = 1;
    cout << "\n Digite um numero: "; cin >> num;
    p = num1 * (num1+1)* (num1+2);
    while (p < num)
          {
                cout << p << endl;
                num1++;
                p = num1 * (num1+1)* (num1+2);
          }
    if (p==num)
       {
               cout << "\nE triangular" << " " << p ;
       }
    else
        {
               cout << "\nNao e triangular" <<" "<< p ;
        }
    cout << endl;
    system ("Pause");
}
