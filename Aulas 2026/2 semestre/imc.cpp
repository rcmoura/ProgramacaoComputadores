#include <iostream>
#include <string>
using namespace std;

int main()
{
	float peso, altura, imc;
    cout << "Peso: "; cin >> peso;
    cout << "Altura: "; cin >> altura;
    imc = peso / (altura * altura);
    if (imc < 18.5) 
		cout << "Abaixo do peso" << endl;
    else if (imc < 25) 
		cout << "Peso normal" << endl;
    else 
		cout << "Sobrepeso" << endl;

}