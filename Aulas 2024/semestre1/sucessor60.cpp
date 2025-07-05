#include <iostream>
using namespace std;

int main()
{
    int num, num1;
    cout << "\n Digite um numero entre 0-60 -> ";
    cin >> num;
    num1 = (num + 1) % 61;
    cout << "\n Sucessor: " << num1;
    cout << endl;
    system("Pause");
}
