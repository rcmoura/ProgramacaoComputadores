//programa triangulos

#include <iostream>
using namespace std;

int main()
{
	/* escolhendo as variaveis 
	maior e lados ser?o usados para o teorema de pitagoras */
	float a,b,c,maior,lados;
	// formatando a entrada de dados
	cout << "Entre com o 1o lado -> "; cin >> a;
	cout << "Entre com o 2o lado -> "; cin >> b;
	cout << "Entre com o 3o lado -> "; cin >> c;
	if (a < b + c && b < a + c && c < a + b)
		{
			if (a > b && a > c)
				{
					maior = a * a;
					lados = (b * b)+(c * c);
				}
			else
				{
					if ( b > c)
						{
							maior = b * b;
							lados = (a * a)+(c * c);
							
						}
					else
						{
							maior = c * c;
							lados = (a * a)+(b * b);
						}
				}
			if (maior == lados)
				{
					cout << "Triangulo Retangulo" << endl;
				}
			else
				{
					if (maior > lados)
					{
						cout << "Triangulo Obtusangulo" << endl;
					}
					else
					{
						cout << "Triangulo Acutangulo" << endl;
					}
				}
		}
	else
		{
			cout << endl;
			cout << " Os valores fornecidos nao formam um Triangulo";
			cout << endl;
		}
	
}
