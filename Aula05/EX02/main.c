#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int x;
	int y;
} ponto;

// ---
typedef struct
{
	ponto esquerda;
	ponto direita;

} retangulo;



int main(int argc, char* argv[])
{
	retangulo figura;

	printf("\nPonto inferior direito: \n");

	printf("x: ");
	scanf("%d%*c", &figura.direita.x);

	printf("y: ");
	scanf("%d%*c", &figura.direita.y);

	printf("\nPonto superior esquerdo: \n");

	printf("x: ");
	scanf("%d%*c", &figura.esquerda.x);

	printf("y: ");
	scanf("%d%*c", &figura.esquerda.y);

	// --- Definindo a altura:
	int altura = abs(figura.direita.x - figura.esquerda.x);

	// --- Definindo a largura:
	int largura = abs(figura.direita.y - figura.esquerda.y);

	// --- Definindo a área da figura:
	int area = altura * largura;

	// --- Definindo o perímetro da figura:
	int perimetro = altura * 2 + largura * 2;

	// --- Definindo a medida da diagonal:
	float diagonal = sqrt(largura * largura + altura * altura);

	// --- Apresentando os resultados:
	printf("Altura: %d\n",   altura);
	printf("Largura: %d\n", largura);
	printf("\n");
	printf("Perimetro: %d\n", perimetro);
	printf("Area: %d\n", area);
	printf("Diagonal: %.2f\n", diagonal);


	printf("\nPressione enter para encerrar... \n\n");
	getchar();
	return 0;
}

