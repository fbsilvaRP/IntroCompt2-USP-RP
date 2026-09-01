//Fatorial iterativo

#include <stdio.h>

int main()
{
	int fat = 1;
	int n = 5;
	for(int i = 2; i <= n; i++)
		fat = fat * i;

	printf("fatorial: %d", fat);

	getchar();
	return 0;
}
