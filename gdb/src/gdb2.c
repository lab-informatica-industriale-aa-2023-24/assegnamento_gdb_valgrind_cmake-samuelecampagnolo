// gdb2.c
// programma che stampa la somma da 1 a 1000

#include <stdio.h>

int main()
{
	int sum = 0;

	for(int i = 0; i <= 1000; i++) {  // i deve essere minore di 1000, senza correzione il for non partiva mai
		sum += i;
	}

	printf("%d\n", sum);
	return 0;
}
