#include <stdio.h>
#define TAM 5

int main(int argc, char* argv[])

{
	printf("\n ========================================================================== \n");
	int array[TAM]; 
	int *p; 
	p = array; 

	// --- Leitura do array
	for(int i = 0; i < TAM; i++)
	{
		printf("[%d]: ", i); 
		scanf("%d%*c", p + i);
	}

	// --- Percorrendo os endereços do array
	for(int i = 0; i < TAM; i++)
		if(*(p + i) % 2 == 0)
			printf("Endereco de %d: %p \n", *(p + i), (p + i)); 
	printf("\n ========================================================================== \n");
	return 0;
}
