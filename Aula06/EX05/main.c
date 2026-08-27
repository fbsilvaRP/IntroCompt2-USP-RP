#include <stdio.h>

#define MAXCHAR 1000

int main(int argc, char* argv[])
{
	FILE *arq1, *arq2, *arq3;

	char nome1[MAXCHAR];
	char nome2[MAXCHAR];

	// --- Recebendo o nome dos arquivos do usuário:
	printf("Digite o nome do primeiro arquivo: ");
	fgets(nome1, sizeof(nome1), stdin);

	printf("Digite o nome do segundo arquivo: ");
	fgets(nome2, sizeof(nome2), stdin);


	arq1 = fopen(nome1, "w+");	//Primeiro arquivo de texto(criação + leitura);
	arq2 = fopen(nome2, "w+");	//Segundo arquivo de texto (criação + leitura);

	arq3 = fopen("arq3.txt", "w");	//Terceiro arquivo de texto (escrita);


	//Verificando se os arquivos foram abertos:
	if(arq1 == NULL || arq2 == NULL || arq3 == NULL)
	{
		printf("\nErro na abertura de um dos arquivos.");
		getchar();
		return 1;
	}
	else
		printf("\nExecução bem sucedida!");

	//Realizando a leitura dos arquivos 1 e 2:





	// --- Encerramento do programa ---
	fclose(arq1);	//Fecha o arquivo 1;
	fclose(arq2);	//Fecha o arquivo 2;
	fclose(arq3);	//Fecha o arquivo 3;
	printf("\nPressione Enter para encerrar...\n");
	getchar();
	return 0;
}
