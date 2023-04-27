#include <stdio.h>
#include <math.h>
int main()
{
	int num;
	float resp;
	printf("Digite um numero inteiro:\n");
	scanf("%d", &num);
	if(num == 0)
	{
		printf("Zero e considerado um numero neutro!\n");
	}
	else
	{
		if(num > 0)
		{
			resp = sqrt(num);
			printf("A raiz quadrada de %d e: %.2f\n", num, resp);	
		}
		else
		{
			resp = pow(num, 2);
			printf("O quadrado de %d e: %.2f\n", num, resp);
		}
	}
	return 0;
}
