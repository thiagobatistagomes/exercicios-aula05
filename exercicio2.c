/*#include <stdio.h>

int main()
{
	float a, b, c, d;
	printf("Digite quatro numeros:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	if((a<b) && (a<c) && (a<d))
	{
		printf("O menor numero e: %.2f\n", a);
	}
	if((b<a) && (b<c) && (b<d))
	{
		printf("O menor numero e: %.2f\n", b);
	}
	if((c<a) && (c<b) && (c<d))
	{
		printf("O menor numero e: %.2f\n", c);
	}
	if((d<a) && (d<b) && (d<c))
	{
		printf("O menor numero e: %.2f\n", d);
	}
	return 0;
}*/


#include <stdio.h>

int main ()
{
	float a, b, c, d, menor;
	printf("Digite quatro numeros:\n");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	menor = a;
	if(b < menor)
	{
		menor = b;
	}
	if(c < menor)
	{
		menor = c;
	}
	if(d < menor)
	{
		menor = d;
	}
	printf("O menor numero e: %.2f\n", menor);
	return 0;
}

