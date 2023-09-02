#include <iostream>
using namespace std;

int main()
{
	int l,c,cap,n,totaluno;
	float media,somageral,mediaescola;
	somageral = 0;
	totaluno = 0;
	for(l=1 ; l <= 5; l++)
	{
		cap = 0;
		cout << "Quantos alunos tem a "<<l<<"a. turma? "; cin >> n;
		cout << endl;
		totaluno = totaluno + n;
		for(c=1;c<=n;c++)
		{
			cout << "Digite a media do "<<c<<"o. aluno: "; cin >> media;
			cout << endl;
			if (media > 7)
			{
				cap++;
				somageral = somageral + media;
			}
			
		}
		cout << "Total de alunos com media superior 7: " << cap << endl;
	}
	mediaescola = somageral / totaluno;
	cout << "Media da escola: " << mediaescola << endl;
}