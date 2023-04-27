#include <stdio.h>

int main()
{
	int num;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	if(num % 2 == 0)
	{
		printf("PAR!\n");
	}
	else
	{
		printf("IMPAR!\n");
	}
	return 0;
}
