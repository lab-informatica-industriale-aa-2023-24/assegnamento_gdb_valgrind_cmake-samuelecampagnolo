// valgrind3.c

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *p;
	p = (char *) malloc(30);//aumento memoria allocata

	char *s = p;
	for(int n = 0; n < 20; n++) {
		*s = '\0';
		s++;
	}

	for(int n = 0; n < 30; n++) {
		*s = 'A';
		s++;
	}
free(p); //libero memoria
}
