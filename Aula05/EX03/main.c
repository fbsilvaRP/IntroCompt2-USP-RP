#include <stdio.h>
#include <string.h>

struct data
{
	int dia;
	int mes;
	int ano;
};

struct pessoa
{
	char nome[50];
	struct data nascimento;

};

int main(int argc, char* argv[])
{
	struct pessoa cadastro[4];

	for(int i = 0; i < 4; i++)
	{
		printf("Pessoa [%d]: \n", i);
		printf("Digite seu nome: ");
		fgets(cadastro[i].nome, sizeof(cadastro[i].nome), stdin);
	}
	return 0;
}
