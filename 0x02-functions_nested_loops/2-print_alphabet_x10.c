#include "main.h"
/**
 * print_alphabet_x10 - prints letters ten times
 *
 * Return: returns a void
 */
void print_alphabet_x10(void)
{
char l;
int t = 0;

while( t < 10 )
{
for  (l = 'a'; l <= 'z'; l++)
{
_putchar(l);
}
_putchar('\n');
t++;
}

}
