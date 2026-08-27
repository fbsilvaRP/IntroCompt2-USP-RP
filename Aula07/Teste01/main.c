#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(int argc, char*argv[])
{

	int* p;
	p = malloc(TAM * sizeof(int));

	printf("\nEntre com os valores do vetor: \n");

	for(int i = 0; i < TAM; i++)
	{
		printf("[%d]: ", i + 1);
		scanf("%d%*c", p + i);
	}

	//--- Ordenando o vetor:
	int maior = *(p);

	for(int i = 0; i < TAM; i++)
	{
		if(*(p + i) > maior)
			maior = *(p + i);
	}

	printf("\nMaior numero: %d\n", maior);

	free(p);
	printf("Pressione ENTER para encerrar...");
	getchar();
	return 0;
}
