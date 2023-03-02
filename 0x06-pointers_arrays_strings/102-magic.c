#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/**
 * main - Entry point
 *
 * This function is the entry point of the program. It initializes
 * some variables, performs some calculations, and prints the result
 * to the console.
 *
 * Return: Always 0 (Success)
 */
	*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
