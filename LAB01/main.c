#include <stdio.h>
#include <stdlib.h>

//Definição da função recursiva:
int redutor_digital(int N, int contador)
{

	//---1.Coletando os algarismos do valor inserido:

	int op = 1;						//Var. p/ manter o loop em funcionamento
	int* vetor = malloc(1 * sizeof(int));			//Vetor p/ armazenar os algarismos do número inserido
	int TAM = 0;						//Var. índice para o vetor de algarismos
	int operando = N;					//Var. para realizar as operações numéricas

	while(op)
	{
		vetor[TAM] = operando % 10;				//O vetor recebe o algarismo mais à direita do número
		TAM = TAM + 1;						//Incrementa o índice em uma unidade

		// Como não sabemos a qtd de algarismos, expandimos em uma unidade a cada loop

		int* temp = realloc(vetor, (TAM + 1) * sizeof(int));	//Vetor temporário para expandir o vetor de algarismos

		vetor = temp;

		if((operando / 10) == 0)				//Caso não seja mais possível dividir por 10, encerra o loop
			op = 0;

		operando = operando / 10; 				//Atualiza o valor em operação
	}

	// --- 2.Verificando se os algarismos são todos iguais a 1:
	int todos_sao_um = 1; 						//Var. para verificar se todos os valores são 1
	int soma = 0;							//Var. armazenar a soma dos algarismos

	for(int i = 0; i < TAM; i++)
	{
		soma = soma + vetor[i];

		if(vetor[i] != 1)
			todos_sao_um = 0;				//Caso haja um algarismo diferente de 1, nega a variável
	}
	//Liberação da memória utilizada:
	free(vetor);

	//Se todos os valores forem 1
	if(todos_sao_um)
	{
		printf("%d", N);
		printf("\nTotal de elementos: %d", contador);
		return 0;
	}

	//Se o número N for par...
	if((N % 2) == 0)
	{
		int resultado = (N / 2) - soma;
		if(resultado <= 1)
			resultado = 1;

		printf("%d -> ", N);
		return redutor_digital(resultado, contador + 1);
	}
	//Se o número N não for par (ou seja, ímpar)
	else
	{
		printf("%d -> ", N);
		return redutor_digital(N - 1, contador + 1);
	}
}

int main(int argc, char* argv[])
{
	int numero;
	printf("n: ");
	scanf("%d%*c", &numero);

	if(numero > 0)
		redutor_digital(numero, 1);

	printf("\nPressione ENTER para encerrar...");
	getchar();
	return 0;
}
