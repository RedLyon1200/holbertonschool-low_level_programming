#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (success)
 */
int main(void)
{
char alpha;
alpha = 'z';
while (alpha >= 'a')
{
putchar(alpha);
alpha = alpha - 1;
}
putchar('\n');
return (0);
}
