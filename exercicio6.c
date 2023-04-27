#include <stdio.h>

int main()
{
	float sal, prest;
	printf("Digite o seu salario:\n");
	scanf("%f", &sal);
	printf("Digite o valor das prestacoes do emprestimo:\n");
	scanf("%f", &prest);
	if(prest > sal * 0.2)
	{
		printf("Emprestimo nao concedido!\n");
	}
	else
	{
		printf("Emprestimo concedido!\n");
	}
	return 0;
}
