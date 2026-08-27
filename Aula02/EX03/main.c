#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char frase[90];
	int qtdVogais = 0; 
	int qtdConsoantes = 0; 

	printf("Digite uma frase: "); 

	// --- Recebendo a frase do usuário
	fgets(frase, sizeof(frase), stdin); 

	printf("Você digitou:  %s \n", frase); 

	// ---Percorrendo a frase 
	for(int i = 0; frase[i] != '\0'; i++)
	{
		// --- Verificando se é vogal
		int letra = frase[i]; 
		if(letra == 'a' ||
		   letra == 'A' ||
		   letra == 'e' ||
		   letra == 'E' ||
		   letra == 'i' ||
		   letra == 'I' ||
		   letra == 'o' ||
		   letra == 'O' ||
		   letra == 'u' ||
		   letra ==  'U')
			qtdVogais++; 
		else
			qtdConsoantes++; 
	}
	printf("Qtd de vogais: %d \n", qtdVogais);
	printf("Qtd de consoantes: %d \n", qtdConsoantes); 
	return 0; 
}
