#include <stdio.h>

int main ()
{
	float a, b;
	printf("Digite dois numeros:\n");
	scanf("%f %f", &a, &b);
	if(a<b)
	{
		printf("O menor numero e: %.2f\n", a);
	}
	else
	{
		printf("O menor numero e: %.2f\n", b);
	}
	return 0;
}
