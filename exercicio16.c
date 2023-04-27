#include <stdio.h>

int main ()
{
	float altura;
	char sexo;
	printf("digite sua altura:\n");
	scanf("%f", &altura);
	printf("digite seu sexo:\n");
	scanf(" %c", &sexo);
	if(sexo == 'M' || sexo == 'm')
	{
		if(altura >= 1.75)
		{
			printf("sim!\n");
		}
		else
		{
			printf("nao!\n");
		}	
	}
	else if(sexo == 'F' || sexo == 'f')
	{
		if(altura >= 1.80)
		{
			printf("sim!\n");
		}
		else
		{
			printf("nao!\n");
		}
	}
	else
	{
		printf("falha na operacao!\n");
	}
	return 0;
}
