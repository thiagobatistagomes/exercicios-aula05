#include <stdio.h>

int main ()
{
	float h, peso;
	char sexo;
	printf("Digite sua altura:\n");
	scanf("%f", &h);
	printf("Digite seu sexo [M] ou [F]:\n");
	scanf(" %c", &sexo);
	if(sexo == 'M' || sexo == 'm')
	{
		peso = (72.7 * h) - 58;
		printf("Peso ideal: %.2f\n", peso);
	}
	else if( sexo == 'F' || sexo == 'f')
	{
		peso = (62.1 * h) - 44.7;
		printf("Peso ideal: %.2f\n", peso);
	}
	else
	{
		printf("Falha na operacao!\n");
	}
	return 0;
}
