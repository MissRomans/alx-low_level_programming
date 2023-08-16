#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: Always 0
 */

int main(void)
{
	int count;
	unsigned long int m1 = 0, m2 = 1, sum;
	unsigned long int m1_half1, m1_half2, m2_half1, m2_hlf2;
	unsigned long int half1, half2;

for (count = 0; count < 92; count++)
{
sum = m1 + m2;
printf("%lu, ", sum);
m1 = m2;
m2 = sum;
}
m1_half1 = m1 / 10000000000;
m2_half1 = m2 / 10000000000;
m1_half2 = m1 % 10000000000;
m2_half2 = m2 % 10000000000;
for (count = 93; count < 99; count++)
{
half1 =  m1_half1 + m2_half1;
half2 = m1_half2 + m2_half2;
if (m1_half2 + m2_half2 > 9999999999)
{
half1 += 1;
half 2 %= 10000000000;
}
printf("%lu%lu", half1, half2);
if (count != 98)
printf(",");
m1_half1 = m2_half1;
m1_half2 = m2_half2;
m2_half1 = half1;
m2_half2 = half2;
}
printf("\n");
return (0);
}
