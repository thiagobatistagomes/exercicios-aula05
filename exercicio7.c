#include <stdio.h>

int main ()
{
	float preco;
	int estado;
	printf("Digite o preco do produto:\n");
	scanf("%f", &preco);
	printf("Digite o estado:\nUse 1 = MG; 2 = SP; 3 = RJ; 4 = ES;\n");
	scanf("%d", &estado);
	if(estado == 1)
	{
		preco = preco * 1.12;
		printf("Preco final com acrescimo de imposto: %.2f\n", preco);
	}
	else if(estado == 2)
	{
		preco = preco * 1.07;
		printf("Preco final com acrescimo de imposto: %.2f\n", preco);
	}
	else if(estado == 3)
	{
		preco = preco * 1.15;
		printf("Preco final com acrescimo de imposto: %.2f\n", preco);
	}
	else if(estado == 4)
	{
		preco = preco * 1.08;
		printf("Preco final com acrescimo de imposto: %.2f\n", preco);
	}
	else
	{
		printf("Estado invalido!\n");
	}
	return 0;
}
