#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	printf("\n ============================================================== \n");
	// --- 1.Declarações 
	int *p; 
	int tam; 

	// --- 2.Obtendo o tamanho do vetor(usuário)
	printf("Tamanho do vetor: "); 
	scanf("%d%*c", &tam);
	
	p = malloc(tam * sizeof(int));

	// --- 3.Preenchendo por alocação dinâmica 
	for(int i = 0; i < tam; i++)
	{
		printf("[%d]: ", i);
		scanf("%d%*c", (p + i)); 
	}
	
	// --- 4.Apresentando o vetor
	for(int i = 0; i < tam; i++)
		printf("[%d], ", *(p + i)); 
	printf("\n ============================================================== \n");

	return 0; 
}
