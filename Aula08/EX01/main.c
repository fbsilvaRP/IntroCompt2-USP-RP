#include <stdio.h>
#include <stdlib.h>

#define tam 6


int main(int argc, char* argv[])
{
	int *vet;
	vet = malloc(tam * sizeof(int));

	if(vet == NULL)
		printf("Erro ao alocar memória...");

	// --- Atribuindo valores:
	vet[0] = 23;
	vet[1] = 47;
	vet[2] = 15;
	vet[3] = 88;
	vet[4] = 6;
	vet[5] = 71;

	// --- Apresentando os valores preenchidos:
	printf("Vetor original: \n");
	for(int i = 0; i < tam; i++)
		printf("[%d], ", *(vet + i));

	// --- Encontrando o maior elemento do vetor:
	int maior = vet[0];
	for(int i = 1; i < tam; i++)
		if(*(vet + i) > maior)
			maior = *(vet + i);

	printf("\nO maior elemento do vetor é %d\n", maior);

	free(vet);
	printf("\nPressione ENTER para encerrar...\n");
	getchar();
	return 0;
}
