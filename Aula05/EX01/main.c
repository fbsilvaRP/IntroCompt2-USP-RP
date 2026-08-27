#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 struct ponto
{
	int x;
	int y;
};

struct retangulo
{
	struct ponto esquerda;
	struct ponto direita;
};

int main(int argc, char* argv[])
{
	struct retangulo fig;

	// --- Preenchendo o ponto superior esquerdo:
	printf("Ponto superior esquerdo:\n ");
	printf("x: ");
	scanf("%d%*c", &fig.esquerda.x);
	printf("y: ");
	scanf("%d%*c", &fig.esquerda.y);

	// --- Preenchendo o ponto inferior direito:
	printf("Ponto inferior direito: \n");
	printf("x: ");
	scanf("%d%*c", &fig.direita.x);
	printf("y: ");
	scanf("%d%*c", &fig.direita.y);

	//---- cálculo da largura
	int largura = abs(fig.direita.x  - fig.esquerda.x);

	// --- cálculo da altura
	int altura = abs(fig.direita.y - fig.esquerda.y);

	printf("Largura: %d \n Altura: %d \n", largura, altura);

	// --- cálculo da área
	int area = largura * altura;

	// --- cálculo do perímetro
	int perimetro = 2 * largura + 2 * altura;

	// --- cálculo da diagonal --- Teorema de Pitágoras:
	float diagonal = sqrt(altura * altura + largura * largura);

	printf("Area: %d \n Perimetro: %d \n Diagonal: %.2f \n", area, perimetro, diagonal);
	

	// --- Encerramento do código ---
	printf("Pressione enter para encerrar...");
	getchar();
	return 0;
}

