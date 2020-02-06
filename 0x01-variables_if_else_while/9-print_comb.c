#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
int n = 48; /* 48 is 0 on ASCII */
while (n <= 57) /* 57 is 9 on ASCII */
{
putchar(n);
if (n != 57)
{
putchar(', ');
}
n++;
}
putchar('\n');
return (0);
}
