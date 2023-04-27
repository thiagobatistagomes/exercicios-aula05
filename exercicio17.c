#include <stdio.h>
#include <math.h>
int main ()
{
	float diametro_bola, altura_caixa, largura_caixa, profundidade_caixa;
    	printf("Digite o diâmetro da bola de boliche (em cm): ");
    	scanf("%f", &diametro_bola);
    	printf("Digite a altura da caixa (em cm): ");
    	scanf("%f", &altura_caixa);
    	printf("Digite a largura da caixa (em cm): ");
    	scanf("%f", &largura_caixa);
    	printf("Digite a profundidade da caixa (em cm): ");
    	scanf("%f", &profundidade_caixa);
    	float diagonal_caixa = sqrt(pow(altura_caixa, 2) + pow(largura_caixa, 2) + pow(profundidade_caixa, 2));
    	if (diametro_bola <= diagonal_caixa)
    	{
        printf("sim\n");
    	}
    	else
    	{
        printf("nao\n");
    	}
}
