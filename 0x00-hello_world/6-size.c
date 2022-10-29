#include <stdio.h>

/**
 *main - entry point 
 *
 *return: always 0 (success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

printf("size of char: %lu bytes\n", (unsigned long)sizeof(d));
printf("size of int: %lu bytes\n", (unsigned long)sizeof(a));
printf("size of long int: %lu bytes\n", (unsigned long)sizeof(b));
printf("size of long long int : %lu bytes\n", (unsigned long)sizeof(c));
printf("size of float: %lu bytes\n", (unsigned long)sizeof(e));
return (0);
};
