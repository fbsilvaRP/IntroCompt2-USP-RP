#include <stdio.h>

int main(int argc, char* argv[])
{
	// ---
	FILE *arq;
	arq = fopen("teste.txt", "w");

	// ---
	if(arq == NULL)
		printf("\nErro na abertura do arquivo. O arquivo não foi aberto.");
	else
		printf("\nCriação do arquivo bem sucedida!");

	// --- Fechando o arquivo
	int resposta = fclose(arq);
	if(resposta)
		printf("\nErro no fechamento...\n");
	else
		printf("\nSucesso ao fechar o arquivo.\n");

	printf("\nPressione ENTER para encerrar...\n");
	getchar();
	return 0;
}
