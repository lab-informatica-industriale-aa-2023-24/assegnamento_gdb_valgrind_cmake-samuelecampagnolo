// valgrind2.c

#include <stdio.h>
#include <stdlib.h>


int main()
{
	char *p;

	p = (char *) malloc(19);
        free(p);
	p = (char *) malloc(12);
	free(p);

	p = (char *) malloc(16);
	free(p);
	//ogni volta che finisco di usare la memoria la devo liberare
	return 0;
}
