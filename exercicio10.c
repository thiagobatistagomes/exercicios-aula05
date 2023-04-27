#include <stdio.h>
#include <math.h>
int main ()
{	
	float a, b, c, delta, x1, x2;
	printf("Digite os valores de a, b e c:\n");
	scanf("%f %f %f", &a, &b, &c);
	delta = pow(b, 2) - 4*a*c;
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2*a);
        	x2 = (-b - sqrt(delta)) / (2*a);
        	if (x1 < x2)
        	{
            		printf("%.2f %.2f", x1, x2);
        	}
        	else
        	{
            		printf("%.2f %.2f", x2, x1);
        	}
	}
	else if (delta == 0)
	{
        	x1 = -b / (2*a);
        	printf("%.2f", x1);
    	}
    	else
    	{
        	printf("sem raizes reais");
    	}
	return 0;
}
