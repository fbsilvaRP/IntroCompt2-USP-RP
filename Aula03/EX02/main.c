#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[])
{
	int x, *p, **q; 

	p = &x; 

	q = &p; 

	x = 10; 

	printf("\n %d \n",**q);

	return 0; 
}
