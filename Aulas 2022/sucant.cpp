//Programa soma
// Biblioteca
#include <iostream> 
// facilitando o uso o do teclado (é obrigatorio)
using namespace std; 

int main()
// inicio do programa
{
	int num, suc, ant;
	cout << "Entre com um numero: ";
	cin >> num;
	ant = num - 1;
	suc = num + 1;
	cout << "O sucessor e: "<<suc<<" e o antecessor e: "<< ant;
	cout << endl;
	system("pause");
}