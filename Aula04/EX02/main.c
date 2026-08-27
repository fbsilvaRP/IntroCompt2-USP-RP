#include <stdio.h>

int __exp__(int x, int y)
{
	if((x == 1) || (y == 0))
		return 1; 

	if((x < 0) || (y < 0))
		return 0; 
	
	int exp = x; 
	int i = 1; 

	while(i < y)
	{
		exp = exp * y; 
		i++; 
	}
	return exp; 
}

double  __serieS__(int n)
{ 
	double S;
	double i = 1;  
	double numerador;
	double denominador; 

	while(i <= n)
	{
		numerador = (__exp__(i, 2) + 1);
		denominador = i + 3;
		S = numerador / denominador; 
		i++; 
	}
	
	return S;  
	
}

int main(int argc, char* argv[])
{
	int N; 
	printf("N: "); 
	scanf("%d%*c", &N); 
	printf("S = %.3f", __serieS__(N));

	return 0; 
}
