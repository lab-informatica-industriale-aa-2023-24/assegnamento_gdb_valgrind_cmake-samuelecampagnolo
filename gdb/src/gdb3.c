// gdb3.c
#include<stdio.h>

long fattoriale(int n)
{
	long result = 1;
	while (n>1){
		result*=n;
                n--} //il decremento va fatto dentro il ciclo non nella condizione
 	return result;
}


int main()
{
	int n = 10;

	long val = fattoriale(n);

	printf("Fattoriale di %d, %ld\n", n, val);

	return 0;
}
