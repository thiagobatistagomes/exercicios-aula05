#include <stdio.h>

int main ()
{
	float a, b, c;
	printf("Digite as medidas dos lados do triangulo:\n");
	scanf("%f %f %f", &a, &b, &c);
	if(a == b && b == c)
	{
		printf("equilatero\n");
	}
	else if(a == b || a == c || b == c)
	{
		printf("isosceles\n");
	}
	else
	{
		printf("escaleno\n");
	}
	return 0;
}
