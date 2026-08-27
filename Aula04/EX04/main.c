#include <stdio.h>
#include <stdlib.h>

// --- 1.Definindo a função
void preencheVetor(int* p, int tam, int valor)
{
	for(int i = 0; i < tam; i++)
		*(p + i)  = valor;
}

// -- 2.Função para exibir um vetor
void exibeVetor(int *p, int tam)
{
	for(int i = 0; i < tam; i++)
		printf("[%d], ", *(p + 1));
}

int main(int argc, char* argv[])
{
	printf("\n ============================================ \n");
	int tamanho;
	int valor;

	printf("Tamanho do vetor: ");
	scanf("%d%*c", &tamanho);

	printf("Digite um valor para preencher o vetor: ");
	scanf("%d%*c", &valor);

	int vetor[tamanho];

	preencheVetor(vetor, tamanho, valor);

	exibeVetor(vetor, tamanho);
	printf("\n ============================================ \n");

	return 0;
}
