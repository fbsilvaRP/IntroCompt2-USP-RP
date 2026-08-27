#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *arquivo;
	arquivo = fopen("teste.txt", "w");

	char nome[50];
	int v;

	while(feof(arquivo) == 0)
	{
		fscanf(arquivo, "%d", &v); 	//Obtém um dado do tipo inteiro do arquivo;
		fscanf(arquivo, "%s", nome);	//Obtém um dado do tipo string do arquivo;
	}


	fclose(arquivo);
	getchar();
	return 0;
}
