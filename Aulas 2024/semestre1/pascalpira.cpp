#include<iostream>
using namespace std;
long fact(int);
int main()
{
	
	int i, n, c;
	cout<<"Ate quantas linhas (Digite o numero de linhas): ";
	cin>>n;
	for(i=0; i<n; i++)
	{
		for(c=0; c<=(n-i-2); c++)
		{
			cout<<" ";
		}
		for(c=0; c<=i; c++)
		{
			cout<<fact(i)/(fact(c)*fact(i-c));
		}
		cout<<"\n";
	 }
	 
}

long fact(int n)
{
	int c;
	long res=1;
	for(c=1; c<=n; c++)
	{
		res = res*c;
	}
	return (res);
}
