#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (succes)
 */
int main(void)
{
int num;
num = 48;
while (num < 57)
{
num++;
putchar(num);
}
if (num == 57)
{
putchar('\n');
}
return (0);
}
