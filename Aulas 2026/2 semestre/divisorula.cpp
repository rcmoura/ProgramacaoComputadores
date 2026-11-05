/* 2. Sabendo-se que a UAL calcula a divisão através de subtrações
 sucessivas, criar um algoritmo que calculee exiba o resto da 
 divisão de números inteiros lidos. Suponha que os números lidos 
 sejam positivos e que o dividendo seja maior do que o divisor.*/
 
#include <iostream>
using namespace std;

int main()
{
	int dividendo, divisor, aux, resto;
	cout << "\ndigite dividendo: ";cin >> dividendo;
	cout <<  "\ndigite divisor: "; cin >> divisor;
	if(dividendo < divisor)
	{
		aux = dividendo;
		dividendo = divisor;
		divisor = aux;
	}
	resto = dividendo - divisor;
	while( resto > divisor)
	{ 
		dividendo = resto;
		resto = dividendo - divisor;
	}
	cout << "\nResto: " << resto;
	cout << endl;
}
