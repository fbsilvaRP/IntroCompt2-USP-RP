#include <stdio.h>

int __exp__(int x, int y)
{
	//Se y = 0 (expoente zero) ou x = 1
	if((y == 0) || (x == 1))
		return 1; 
	//Se y < 0 ou x < 0 (inválido)
	if(x < 0 || y < 0)
		return 0; 

	//Caso os dois valores sejam inteiros
	int i = 1;
	int exp = x; 

	while(i < y)
	{
		exp = exp * x;
		i++; 
	}
	return exp; 
}

int main(int argc, char* argv[])
{
	printf("\n ================================================ \n");
	int a, b; 

	printf("a: ");
	scanf("%d%*c", &a);

	printf("b: "); 
	scanf("%d%*c", &b); 
	
	printf("a elevado a b: %d", __exp__(a,b)); 
	printf("\n ================================================ \n");
	return 0; 
}
