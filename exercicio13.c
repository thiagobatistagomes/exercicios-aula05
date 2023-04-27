#include <stdio.h>

int main ()
{
	int idade;
	printf("Digite sua idade:\n");
	scanf("%d", &idade);
	if(idade < 4)
	{
		printf("Nao ha classificacao!\n");
	}
	else if(idade >3 && idade<=5)
	{
		printf("Fraldinha!\n");
	}
	else if(idade >5 && idade<=12)
	{
		printf("Infantil!\n");
	}
	else if(idade >12 && idade<=18)
	{
		printf("Juvenil!\n");
	}
	else
	{
		printf("Adulto!\n");
	}
	return 0;
}
