#include <stdio.h>

int main(int argc, char* argv[])
{
	// ---1.Declarando a matriz do epaço
	int espaco[7][7] = {
	{0, 2, 11, 6, 15, 11, 1}, 
	{2, 0, 7, 12, 4, 2, 15},
	{11, 7, 0, 11, 8, 3, 13},
	{6, 12, 11, 0, 10, 2, 1}, 
	{15, 4, 8, 10, 0, 5, 13},
	{11, 2, 3, 2, 5, 0, 14},
	{1, 15, 13, 1, 13, 14, 0}
	};
	
	// --- Mantendo o programa em loop
	int cond = 1;
	while(cond)
	{
	
		// ---.Recebendo as entradas do usuário 
		int inicio; 
		int fim; 
		int tempo;

		printf("Digite a cidade de saida: ");
		scanf("%d%*c", &inicio);
		
		printf("Digite a cidade de chegada: "); 
		scanf("%d%*c", &fim); 

		// --- Condição de parada do loop
		if(inicio == 0 || fim == 0)
		{
			cond = 0;
			return 0;  
		}

		// --- Delimitação da entrada do usuário
		if(inicio < 0 || inicio > 7 || fim < 0 || fim > 7)
		{
			printf("\n Cidade indisponivel. Tente novamente! \n"); 
			continue; 	
		}

		tempo = espaco[inicio - 1][fim - 1]; 

		printf("Tempo de deslocamento: %d \n", tempo); 
	}

	 return 0; 


}
