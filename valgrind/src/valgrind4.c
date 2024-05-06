#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
	// allocate lo spazio per una stringa nello heap
	char* s = malloc(strlen("Hello World!")+1);//strlen non conta il \0 a fine stringa
	strcpy(s, "Hello World!");

	printf("%s\n", s);

	free(s);

	return 0;
}
