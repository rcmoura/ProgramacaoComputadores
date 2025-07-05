#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int range, i, j, k=1;
	cout<<"Digite o intervalo (até quantas linhas?): ";
	cin>>range;
	cout<<"\nTriângulo Floyd's :\n";
	for(i=1; i<=range; i++)
	{
		for(j=1; j<=i; j++, k++)
		{
			cout<<k<<" ";
		}
		cout<<"\n";
	}
	getch();
}