#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (succes)
 */
int main(void)
{
char a;
a = 'a';
while (a <= 'z')
{
if (a == 'q' || a == 'e')
{
a++;
}
putchar(a);
a++;
if (a > 'z')
{
putchar('\n');
}
}
return (0);
}
