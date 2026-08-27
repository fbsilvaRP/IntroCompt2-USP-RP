#include <stdio.h>
#include <stdlib.h>

#define TAM 6

void preencheVetor(int *vetor, int tamanho)
{
	for(int i = 0; i < tamanho; i++)
	{
		printf("[%d]: ", i);
		scanf("%d%*c", (vetor + i));
	}
}

int main(int argc, char* argv[])
{
	//--- Definindo um arquivo para guardar os vetores:
	FILE *q;

	//--- Definindo o arquivo no modo de abertura e escrita:
	q = fopen("valores.txt", "w");

	if(q == NULL)
	{
		printf("Erro ao abrir o arquivo.\n");
		return 1;
	}
	else
	{
		// --- Executa apenas se o arquivo abrir:
		printf("\nSucesso ao abrir o arquivo!\n");


		// --- Definindo o vetor (alocação dinâmica)
		int *p = malloc(TAM * sizeof(int));

		if(p == NULL)
		{
			printf("erro ao definir o vetor...");
			fclose(q);
			return 1;
		}
		printf("Preencha o vetor abaixo: \n");
		preencheVetor(p, TAM);

		// --- Colocando os dados do vetor obtido no arquivo txt:
		for(int i = 0; i < TAM; i++)
		{
			if(i == TAM - 1)
				fprintf(q, "%d;",  *(p + i));
			else
				fprintf(q, "%d, ", *(p + i));

			if(ferror(q))
				printf("\nErro ao preencher o arquivo!\n");
		}

		// --- desaloca a parte ocupada da memória
		free(p);

		// --- fecha o arquivo
		int resposta = fclose(q);
		if(resposta == 0)
			printf("\nSucesso ao fechar o arquivo!\n");

		else
			printf("\nErro ao fechar o arquivo...\n");
	}

	printf("\nPressione ENTER para encerrar...\n");
	fflush(stdin);
	getchar();
	return 0;
}
