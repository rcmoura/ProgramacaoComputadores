#include <iostream>
using namespace std;

int main()
{
	int cod;
	float vcompra, vvenda;
	cout << "Entre com o codigo do produto: ";cin >> cod;
	cout << "Entre com o valor da compra: ";cin >> vcompra;
	if (vcompra < 10)
	{
		vvenda = vcompra * 1.7;
	}
	else
	{
		if (vcompra < 30)
		{
			vvenda = vcompra * 1.5;
		}
		else
		{
			if (vcompra < 50)
			{
				vvenda = vcompra * 1.4;				
			}
			else
			{
				vvenda = vcompra * 1.3;			
			}	
		}
	}
	cout << "Produto: "<< cod << " sera vendido por: " << vvenda;
}