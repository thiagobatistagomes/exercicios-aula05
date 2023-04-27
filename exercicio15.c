#include <stdio.h>

int main ()
{
	int num;
	printf("Digite um numero:\n");
	scanf("%d", &num);
	if(num % 3 == 0 && num % 5 == 0)
	{
		printf("nao divisivel\n");
	}
	else if(num % 3 == 0)
	{
		printf("divisivel por 3\n");
	}
	else if(num % 5 == 0)
	{
		printf("divisivel por 5\n");
	}
	else
	{
		printf("nao divisivel\n");
	}
	return 0;
}

/* descobri que e possivel utilizar a funcao fmod() para calcular o resto da divisão de dois números de ponto flutuante (float ou double). acredito que essa maneira seja mais completa.

#include <stdio.h>
#include <math.h>
int main ()
{
	double num;
	printf("Digite um numero:\n");
	scanf("%lf", &num);
	if(fmod(num, 3) == 0 && fmod(num, 5) == 0)
	{
		printf("nao divisivel\n");
	}
	else if(fmod(num, 3) == 0)
	{
		printf("divisivel por 3\n");
	}
	else if(fmod(num, 5) == 0)
	{
		printf("divisivel por 5\n");
	}
	else
	{
		printf("nao divisivel\n");
	}
	return 0;
} */
