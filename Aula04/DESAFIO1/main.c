#include <stdio.h>

int main(int argc, char* argv[])
{
	printf("\n ======================================= \n");
	int a, b;
	printf("a: ");
	scanf("%d%*c", &a);

	printf("b: ");
	scanf("%d%*c", &b);

	int qtd = 0; 

	// --- Sequência de fibonacci
	int x1 = 1; 
	int x2 = 1; 
	int soma = 0; 

	for(int i = 0; i < b; i++)
	{
		if((x2 >= a) && (x2 <= b))
			qtd++;

		soma = x1 + x2;
		x1 = x2;
		x2 = soma;
	
	}
	printf("%d", qtd); 



	printf("\n ======================================= \n");
	return 0;
}
