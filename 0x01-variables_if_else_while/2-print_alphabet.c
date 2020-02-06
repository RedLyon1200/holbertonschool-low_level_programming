#include <stdio.h>
/**
 * main - print the lowercase alphabet
 * Return: 0
 */
int main(void)
{
char alpha;
for (alpha = 'a' ; alpha <= 'z' ; alpha++)
{
putchar(alpha);
if (alpha == 'z')
{
putchar('\n');
}
}
return (0);
}
