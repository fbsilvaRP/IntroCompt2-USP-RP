#include <stdio.h>


int main(int argc, char* argv[])
{
	// --- Declarando o arquivo
	FILE *arquivo;
	arquivo = fopen("exemplo.txt", "w");

	// --- Informações a serem gravadas no arquivo
	char nome[20] = "Ricardo";
	int I = 30;
	float altura = 1.74;

	int result;

	if(arquivo == NULL)
	{
		printf("Erro na abertura do arquivo...");
		getchar();
		return 1;
	}

	result = fprintf(arquivo,"Nome: %s \nIdade: %d \nAltura: %f \n", nome, I, altura);

	if(result < 0)
	{
		printf("Erro na escrita \n");
		getchar();
		return 1;
	}

	//Função feof(): verifica se o final do arquivo foi encontrado
	while(feof(arquivo) == 0)
		printf("Leitura do arquivo...\n"); 


	fclose(arquivo);
	getchar();
	return 0;
}
