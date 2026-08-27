#include <stdio.h>

int main(int argc, char* argv[])
{
	int n1, n2; 

	printf("======================================================== \n");
	printf("N1: ");
	scanf("%d%*c", &n1);

	printf("N2: "); 
	scanf("%d%*c", &n2);

	int mdc = 1;  

	int numero1 = n1;
	int numero2 = n2;

	for(int valor = 2;(valor <= numero1 && valor <= numero2); valor++)
	{
		int qtdDivisores = 0;

		// --- Verificar se o valor (divisor) será primo 
		for(int i = 1; i <= valor; i++)
			if(valor % i == 0) 
				qtdDivisores++; 

		// --- Se o valor for primo, ele vai poder ser usado no cálculo do MDC
		if(qtdDivisores == 2)
		{ 
			// --- Enquanto pelo menos um dos valores for divisível pelo primo, mantém o loop funcionando
			while((n1 % valor == 0) || (n2 % valor == 0))
			{
				if((n1 % valor == 0) && (n2 % valor == 0))
					mdc = mdc * valor;
				
				// --- Realiza a operação de divisão do valor n1 pelo número primo (Se possível)					
				if(n1 % valor == 0)
					n1 = n1 / valor;
	 
				// --- Realiza a operação de divisão do valor n2 pelo número primo (Se possível)
				if(n2 % valor == 0)
					n2 = n2 / valor;
				
			}
		}
	}
	printf("MDC(%d, %d) = %d \n", numero1, numero2,  mdc); 

	printf("======================================================== \n");
	return 0; 
}
