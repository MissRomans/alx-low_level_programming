#include <stdio.h>

/**
 * main - entry point
 * Return: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

/*
 * write your line of code here...
 * Remember:
 * -Not allowed to use the variable a
 * -Not allowed to modify the variable p
 * -Only write one statement
 * -Not allowed to use ,
 * -Not allowed to code anything else than the expected line of code
 */
	*(p + 5) = 98;
 /* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
