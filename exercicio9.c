#include <stdio.h>

int main ()
{
	int ano;
	printf("Digite um ano:\n");
	scanf("%d", &ano);
	if(ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0))
	{
		printf("Sim!\n");
	}
	else
	{
		printf("Nao!\n");
	}
	return 0;
}
