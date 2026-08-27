#include <stdio.h>
#define TAM 10

int main(int argc, char* argv[])
{
	// --- 1.Declarando...
	int vetor[TAM]; 

	int valor;  		//Valor a ser buscado no vetor
	int qtd = 0; 		//Qtd de vezes que o valor aparece
	
	// --- 2.Preenchendo o vetor
	for(int i = 0; i < TAM; i++)
	{
		printf("[%d]: ", i);
		scanf("%d%*c", &vetor[i]);  
	}

	// --- 3.Solicitando ao usuário
	printf("Digite o valor que deseja procurar: ");
	scanf("%d%*c", &valor);

	// ---4.Procurando o valor no vetor (contando)
	for(int i = 0; i < TAM; i++)
		if(valor == vetor[i])
			qtd++; 
	
	// ---5.Encontrando as posições
	int vetorPosicoes[qtd];
	int j = 0;
	for(int i = 0; i < TAM; i++)
		if(valor == vetor[i])
		{
			vetorPosicoes[j] = i; 
			j++;
		}
	// --- 6.Apresentando ao usuário: 
	printf("Ocorrencias: %d \n ", qtd); 
	printf("Posicoes: \n"); 
	for(int i = 0; i < j; i++)
		printf("[%d], ", vetorPosicoes[i]);

	// --- 7.Encerrando...
	printf("\n");
	return 0; 
}

