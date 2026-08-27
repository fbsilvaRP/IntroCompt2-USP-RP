//=======================================================================
//Escreva uma função que receba um número inteiro positivo e retorne o
//maior fator primo desse número.
//======================================================================

//OBS: o operador % (resto da divisão) só funciona com valores inteiros!

#include <stdio.h>

//Função para verificar se um número é primo (saída 1), ou não é (saída 0)
int __verPrimo__(int a)
{
	int qtdDiv = 0;

	for(int i = 1; i <= a; i++)
		if(a % i == 0)
			qtdDiv++;

	if(qtdDiv == 2)
		return 1;

	else if(qtdDiv != 0)
		return 0;
}


//Função para calcular o maior fator primo:
int __maiorPrimo__(int n)
{
	//Definindo um valor para armazenar as sucessivas divisões
	int result = n; 
	int maiorPrimo; 

	// --- 1.Testar a divisibilidade pelo valor primo
	for(int i = 1; i <= n; i++)
	{
		if(__verPrimo__(i))
		{
			int op = 1;
			while(op)
			{
				if(result % i == 0)
				{
					result = result / i; 
					maiorPrimo = i; 
				}
				else if(result % i != 0)
					op = 0; 
			}
		}
	}
	return maiorPrimo; 
}

int main(int argc, char* argv[])
{
	printf("\n ================================================================== \n");
	int a;
	printf("a: ");
	scanf("%d%*c", &a);
	printf("maior fator primo: %d", __maiorPrimo__(a));
	printf("\n ================================================================== \n");

	return 0;
}
