#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *p;
	char cadeia[5];

	p = fopen("arq1.txt", "r");

	if(p == NULL)
	{
		printf("Erro na leitura...");
		getchar();
		return 1;
	}

	else
	{
		while(!feof(p))
		{
			fgets(cadeia, 5, p);
			if(ferror(p))
			{
				printf("\nErro na leitura da cadeia...");
				getchar();
				return 1;
			}
			else
			{
				printf("\nLeitura realizada com sucesso!");
				printf("Cadeia lida: %s", cadeia);
			}
		}
	}

	printf("\nPressione ENTER para encerrar...\n");
	getchar();
	return 0;
}
