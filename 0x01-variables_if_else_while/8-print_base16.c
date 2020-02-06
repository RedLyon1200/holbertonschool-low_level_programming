#include <stdio.h>
/**
 * main - entry point
 * Return: always 0 (seccess)
 */
int main(void){
char a, b;
a = 48; /* 48 is 0 on ASCII */
b = 97; /* 97 is a on ASCII */
while (a <= 57) /* 57 is 9 on ASCII */
{
putchar(a);
a++;
}
while (b <= 102) /* 102 is f on ASCCI */
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
