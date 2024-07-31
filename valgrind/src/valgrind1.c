// valgrind1.c
// In questo file ci sono due problemi

#include <stdlib.h>

void f(void)
{
	int* x = malloc(10 * sizeof(int));
	x[9] = 0;// l'array va da 0 a 9
	free(x); //mancava il free
}

int main(void)
{
	f();
	return 0;
}
