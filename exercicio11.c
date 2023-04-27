#include <stdio.h>

int main ()
{
	int idade, tempo;
	printf("Digite a sua idade:\n");
	scanf("%d", &idade);
	printf("Digite seu tempo de servico:\n");
	scanf("%d", &tempo);
	if(idade >= 65 || (tempo >= 30) || (idade >= 60 && tempo >= 25))
	{
		printf("Sim!\n");
	}
	else
	{
		printf("Nao!\n");
	}
	return 0;
}
