#include <stdio.h>
#define tam 10

int main(int argc, char* argv[])
{
	int matriz[tam][tam];
	int *p; 

	p = &matriz[0][0];

	// --- 1. Preenchendo a matriz com zeros	
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++)
			*(p + (i * tam) + j) = 0; 
	
	printf("\nPrimeira matriz (apenas zeros) \n");
	// ---2. Exibindo a matriz com zeros
	for(int i = 0; i < tam; i++)
	{
		for(int j = 0; j < tam; j++)	
			printf("%d, ", *(p + (i * tam) + j)); 
		printf("\n"); 
	}
	// --- 3.Preenchendo novamente a matriz (1 a 1000)
	int valor = 1; 
	for(int i = 0; i < tam; i++)
		for(int j = 0; j < tam; j++)
		{
			*(p + (i * tam) + j) =  valor; 
			valor++; 
		}
	
	printf("\nSegunda matriz \n"); 
	// --- 4.Exibindo a nova matriz
	for(int i = 0; i < tam; i++)
	{
		for(int j = 0; j < tam; j++)
			printf("%d, ", *(p + (i * tam) + j)); 
		printf("\n"); 
	}

	return 0; 
}
