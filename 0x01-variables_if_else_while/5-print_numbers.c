#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (succes)
 */
int main(void)
{
int num;
while (num < 10)
{
printf("%d", num);
num++;
if (num == 10)
{
printf("\n");
}
}
return (0);
}
