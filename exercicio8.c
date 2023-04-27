#include <stdio.h>

int main ()
{
	int num;
	printf("Digite um valor inteiro:\n");
	scanf("%d", &num);
	if(num % 11 == 0)
	{
		printf("Sim!\n");
	}
	else
	{
		printf("Nao!\n");
	}
	return 0;
}
